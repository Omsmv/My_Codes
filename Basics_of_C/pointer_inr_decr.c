#include<stdio.h>
void main ()
{
  int *p;
  int a ;
  scanf("%d",&a);
  p = &a;
 
  printf("Value of a = %d\n", a);
  printf("Address of p is %lu\n", (unsigned long int)p);

  p++;

  printf("Address of p after p++ is %lu\n",(unsigned long int)p);

  p--;
	
  printf("Address of p after p-- is %lu\n",(unsigned long int)p);

  printf("Value of p after p+1 is %lu\n",(unsigned long int)p+1);
  printf("Value of p after p-1 is %lu\n",(unsigned long int)p-1);
}
  
  
