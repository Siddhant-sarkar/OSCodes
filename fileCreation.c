#include<fcntl.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
  char pwd[] = "/Users/siddhantsarkar/Desktop/SiddhantSarkar_102003193/";
  char name[100];
  printf("Enter the name of the file that you want to create\n");
  scanf("%s",name);
  strcat(pwd,name);
  int file = open(pwd,O_WRONLY|O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IROTH);
  if(file){
    printf("the file has been created\n");
  }
}
