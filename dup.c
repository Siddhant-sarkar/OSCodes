#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>

int main(){
  int fd = open("file.txt",O_RDONLY);
  printf("%d\n",fd);
  int j = dup2(fd,11);
  printf("%d\n",j);
}