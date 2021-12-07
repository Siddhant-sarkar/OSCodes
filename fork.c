#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
  pid_t id;
  id = fork();
  if(id < 0 ) printf("Child is not working\n");
  else if ( id == 0 ){
    sleep(2);
    printf("WE are at child\n");
    printf("child id %d\n",getpid());
    printf("parent id %d\n", getppid());
  }else if ( id > 0 ){
    // sleep(3);
    printf("WE are at parent\n");
    printf("parent id %d\n", getpid());
    printf("child id %d\n",id);
  }
}