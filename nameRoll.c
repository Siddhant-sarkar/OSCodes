#include<stdio.h>
#include<string.h>

#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

#include<stdlib.h>
#include<unistd.h>

#define BUFSIZE 1024

int main(){
  int fd = open("file.txt",O_WRONLY | O_CREAT,0666);
  char name [100],roll[100],sub[100],branch[100];
  printf("Please enter the Name : \n");
  scanf("%s",name);strcat(name,"\n");
  printf("Please enter the Roll : \n");
  scanf("%s",roll);strcat(roll,"\n");
  printf("Please enter the subgroup : \n");
  scanf("%s",sub);strcat(sub,"\n");
  printf("Please enter the branch : \n");
  scanf("%s",branch);strcat(branch,"\n");
  write(fd,name,strlen(name));
  write(fd,roll,strlen(roll));
  write(fd,sub,strlen(sub));
  write(fd,branch,strlen(branch));
  close(fd);
  exit(0);
}
