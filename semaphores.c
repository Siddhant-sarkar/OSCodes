#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

void* func1(void* args);
void* func2(void* args);

int shared = 1;
sem_t s;

int main(){
  pthread_t thread1,thread2;  
  sem_init(&s,1,0); // since we are using the binary semaphore;
  pthread_create(&thread1,NULL,func1,NULL);
  pthread_create(&thread2,NULL,func2,NULL);
  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);
  printf("In Main shared ==> %d\n",shared);
  return 0;
}
void *func1(void* args){
  int x ; 
  sem_wait(&s);
  x = shared;
  printf("The global pre value of shared is --> %d\n",x);
  x++;
  printf("The value of local x is --> %d\n",x);
  sleep(1);
  shared=x;
  printf("The modified global shared is --> %d\n",shared);
  sem_post(&s);

}
void *func2(void* args){
  int x; 
  sem_wait(&s);
  x = shared;
  printf("The global pre value of shared is --> %d\n",x);
  x--;
  printf("The value of local x is --> %d\n",x);
  sleep(1);
  shared=x;
  printf("The modified global shared is --> %d\n",shared);
  sem_post(&s);
}
