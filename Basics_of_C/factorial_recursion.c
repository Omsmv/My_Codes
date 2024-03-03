#include<stdio.h>

long int factorial(int i)
{
  if(i<0)
    {
      printf("\nEntered no. is negative.");
      return 0;
    }
  else if(i==0||i==1)
    return 1;
  else
    return i*factorial(i-1);
}

long int main()
{
  long int f;
  int n;
  printf("\nEnter a no.: ");
  scanf("%d",&n);
  f=factorial(n);
  printf("\nThe factorial of the entered no is:%ld",f);
}
