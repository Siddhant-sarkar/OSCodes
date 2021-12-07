#include<stdio.h>
#include<string.h>

#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

#include<stdlib.h>
#include<unistd.h>

#define BUFSIZ 1024
int main(){
  int fd = open("./file.txt",O_RDONLY);
  char buf[BUFSIZ];
  int n ; 
  while((n = read(fd,buf,BUFSIZ))>0)
    write(1,buf,n);
  exit(0);
}