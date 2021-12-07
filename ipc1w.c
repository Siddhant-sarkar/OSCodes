#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(){
  FILE *rd ; 
  char buff[50];
  sprintf(buff,"This is in the buffer");
  rd = popen("wc -c","w");
  fwrite(buff,sizeof(char),strlen(buff),rd);
  pclose(rd);
}