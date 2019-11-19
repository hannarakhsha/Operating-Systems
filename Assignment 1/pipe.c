//Hanna Rakhsha
//CS 4328 - Xiao Chen
//Due Date: 09/19/2019
//This program creates a child TO parent pipeline. The child executes ./pre
//and the parent executes ./sort.

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, const char * argv[]){
   int p[2];
   int pid;
   
   if (pipe(p) == -1)
   {
      perror("pipe call");
      exit(1);
   }
   
   pid = fork();
   
   if (pid < 0)
   {
      fprintf(stderr, "Fork failed");
      exit(-1);
   }
   
   else if (pid == 0)
   {
      close(p[1]);
      dup(p[1]);
      close(p[0]);
      close(p[1]);
      execvp("./pre", NULL);
   }
   
   else
   {
      wait(NULL);
      close(p[0]);
      dup(p[0]);
      close(p[0]);
      close(p[1]);
      execvp("./sort", NULL);
      exit(0);
   }

   return 0;
}
