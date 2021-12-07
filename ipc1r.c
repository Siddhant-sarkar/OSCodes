#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


int main(){
  FILE * fd;
  char buff[1000];
  fd = popen("ls","r");
  int k = fread(buff,sizeof(char),1000,fd);
  write(1,buff,k);
  printf("\n");
  pclose(fd);
}
