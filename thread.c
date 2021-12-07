#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_function(void *args);
int i,j;

int main(){
  pthread_t a_thread;
  pthread_create(&a_thread,NULL,thread_function,NULL);
  // pthread_join(a_thread,NULL);
  printf("Inside the main \n");
  for(int i=5;i<10;i++){
    printf("%d\n",i);
    sleep(1);
  }
}

void *thread_function(void *args){
  printf("Inside Thread\n");
  for(int i=0;i<4;i++){
    printf("%d\n",i);
    sleep(1);
  }
  return 0;
}