#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main(){
  int fd;
  fd = open("fifo1",O_WRONLY);
  write(fd,"Message",7);
  printf("\nSender process --> %d\n",getpid());

}