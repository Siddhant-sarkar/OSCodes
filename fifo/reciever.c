#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(){
  int fd;
  char buff [100];
  fd = open("fifo1",O_RDONLY);
  int k = read(fd,buff,100);
  printf("\nReader process started --> %d\n",getpid());
  printf("The message is %s\n",buff);
}