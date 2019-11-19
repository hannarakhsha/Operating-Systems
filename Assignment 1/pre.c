//Hanna Rakhsha
//CS 4328 - Xiao Chen
//Due Date: 09/19/2019
//This program reads in a list of US states and their populations (to a maximum
//of 10) and outputs the states with populations over 10 million to the console

#include <stdio.h>

int main(int argc, char * argv[]) {
   
   struct States{
      char name[2];
      int population;
   };
   
   int i = 0;
   int counter = 0;
   
   struct States states[10];
   
   while(scanf("%s %d", states[counter].name, &states[counter].population) != EOF){
      counter++;
      if(counter == 10)
         break;
   }
   
   counter = 0;
   
   printf("\n");
   
   while(i < 10){
      if(states[counter].population > 10)
      {
         printf("%s\n", states[counter].name);
         counter++;
      }
      else
         counter++;
      i++;
   }
   
   return 0;
}
