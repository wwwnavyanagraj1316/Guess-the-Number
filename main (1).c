
#include <stdio.h>

int main()
{
  int number=7,guess,chances=5; 
  printf("The number is between 1 and 10\n");
  for(int i=1;i<=chances;i++){
      printf("What is your guess?");
      scanf("%d",&guess);
      
      if(guess<number){
          printf("The number is too low!\n");
  }
      else if(guess>number){
          printf("The number is too high!\n");
      }
           else{
          printf("Good job! You won the game!\n");
          return 0;
      }
  }
  printf("You lost, try again!\n");
  return 0;
}

 