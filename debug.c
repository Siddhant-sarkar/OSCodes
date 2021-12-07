#include<stdio.h>
void functionA();
void functionB();
void functionC();
void functionD();

void functionA(){
  printf("We are the function A\n");
  functionB();
}
void functionB(){
  printf("We are at the function B\n");
  functionC();
}
void functionC(){
  printf("We are at the funciton C\n");
  functionD();
}
void functionD(){
  printf("We are at the end now\n");
}
int main(){
  functionA();
}