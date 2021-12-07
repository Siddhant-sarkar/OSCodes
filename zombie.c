#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/wait.h>

int main(){
  pid_t id ;
  id = fork();

  if(id < 0 ) printf("Fork did not happen properly\n");
  else if ( id == 0){ // in the child process
    printf("I am child %d \n",getpid());
    printf("Parent having the id %d\n",getppid());
  }else{
    sleep(3);
    printf("Parent having the pid %d\n",getpid());
    printf("Child with id %d\n",id);
  }
}