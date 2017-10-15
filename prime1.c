#include<stdio.h>
#include<conio.h>

int main() {
  int num, i, isPrime=0;
  printf("Enter a positive number\n");
  scanf("%d",&num);
  /* Check whether num is divisible by any number between 2 to (num/2)
  */
  for(i = 2; i <=(num/2); ++i) {
      if(num%i==0) {
          isPrime=1;
          break;
      }
  }
  
  if(isPrime==0)
      printf("%d is a Prime Number",num);
  else
      printf("%d is NOT a Prime Number",num);
      
  getch();
  return 0;
}
