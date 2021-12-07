#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
  int fd[2],n;
  pid_t t;
  pipe(fd);
  char buf[100];
  t = fork();

  if(t < 0 ) printf("Child creation was unsuccesful\n");
  else if( t == 0 ){
    printf("Recieving in the child\n");
    int k = read(fd[0],buf,100);
    write(1,buf,k);
  }else{
    printf("Passing value to child\n");
    
    write(fd[1],"Hello\n",6);
  }

}