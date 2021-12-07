#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>


int main(){
  int fi = mkfifo("fifo1",0666);
  printf("Fifo file created\n");
}