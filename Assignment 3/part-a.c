//Hanna Rakhsha
//CS 4328 - Xiao Chen
//Due Date: 11/05/2019
//Program simulates the concurrent execution of two threads without
//using mutual exclusion

#include <stdio.h>
#include <pthread.h>

#define TIMES 10
#define LINES 5

void *threadA();
void *threadB();

int main(){
   int i;
   pthread_t tid;
   
   pthread_setconcurrency(2);
   
   for (i = 1; i <= TIMES; i++){
      pthread_create(&tid, NULL, (void *(*)(void *))threadA, i);
      pthread_create(&tid, NULL, (void *(*)(void *))threadB, i);
   }
   
   pthread_exit(0);
}

void *threadA(int x){
   int i;
   
   for (i = 0; i < LINES; i++)
      printf("%d%s", x, ": AAAAAAAAA\n");
   
   printf("\n");
}

void *threadB(int x){
   int i;
   
   for (i = 0; i < LINES; i++)
      printf("%d%s", x, ": BBBBBBBBB\n");
   
   printf("\n");
}


