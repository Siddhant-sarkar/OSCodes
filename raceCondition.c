#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int shared = 1;
void* func1(void * args);
void* func2(void * args);
int main(){
  pthread_t thread1, thread2;
  pthread_create(&thread1,NULL,func1,NULL);
  pthread_create(&thread2,NULL,func2,NULL);
  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);
  printf("Now finishing the main program shared is %d\n",shared);
}
void* func1(void *args){
  int x = shared;
  printf("The shared is : %d\n",x);
  x++;
  printf("The local thread 1 is now : %d\n",x);
  sleep(1);
  shared=x;
  printf("The global shared is : %d\n",shared);
}

void* func2(void* args){
  int x = shared;
  printf("The shared is : %d\n",x);
  x--;
  printf("The local thread 2 is now : %d\n",x);
  sleep(1);
  shared=x;
  printf("The global shared is : %d\n",shared);
}
