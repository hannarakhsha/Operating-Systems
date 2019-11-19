//Hanna Rakhsha
//CS 4328 - Xiao Chen
//Due Date: 09/19/2019
//This program uses fork() to have a child execute a UNIX command
//Then prints the parent and child process IDs

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
   int pid;
   int cid = getpid();
   int ppid = getppid();
   
   pid = fork();
   
   if (pid < 0)
   {
      fprintf(stderr, "Fork failed");
      exit (-1);
   }
   
   else if (pid == 0)
   {
      printf("Child process ID: %d\n", cid);
      execvp(argv[1], &argv[1]);
   }
   
   else
   {
      wait(NULL);
      printf("Parent process ID: %d\n", ppid);
      
      exit(0);
   }
   
   return 0;
}
