#include<stdio.h>

int fibonacci(int n)
{
  if (n<0)
    {
      printf("\nSeries can;t be calculated");
      return 0;
    }
  else if(n==0||n==1)
    return 1;
  else
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
  int n,f;
  printf("\nEnter a no.: ");
  scanf("%d",&n);
  f=fibonacci(n);
  printf("\nThe %dth fibonacci series is:%d",n,f);
}
