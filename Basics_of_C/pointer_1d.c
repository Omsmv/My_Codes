#include<stdio.h>
void main ()
{
  int x[3] = {1,2,3};
  for (int i=0;i<3;i++)
    {
      printf(" x = %d",x[i]);
    }
  
  printf("\nElement\t Value\t Address\t\n");
  for(int i =0;i<3;i++)
    {
     
      printf("x[%d]\t %d\t %lu\n",i,x[i],&x[i]);
    }
  int *p;
  p = &x;
  for ( int i=0;i<3;i++)
    {
      printf("\nElement\t Value\t Address\t\n");
      printf("x[%d]\t %d\t %lu\t\n",i,*(p+i),( unsigned long int)(p+i));
     }

  printf("Using increment in pointers - \nElement\t Value\t Address\t\n");
  for(int i=0; i<3;i++,p++)
    {
      
      printf("x[%d]\t %d\t %lu\t\n",i,*p,(unsigned long int)p);
    }
  
}
