#include<stdio.h>
#include<unistd.h>

int main(){
  printf("BEfore \n");
  // execl("/bin/ls","ls","-l",NULL);
  execl("/bin/ps","ps",NULL);
  printf("After \n");
}