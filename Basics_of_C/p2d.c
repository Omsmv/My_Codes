#include<stdio.h>

void main()
{
  int x[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i,j;
  printf("Element\t Value\t Address\n");
  for( i=0; i<3; i++)
    {
      for( j=0; j<3; j++)
	{
	  printf("x[%d][%d]\t %d\t %lu\t\n",i,j, x[i][j],(long unsigned int) &x[i][j] );
	}
    }
  
  for( i=0; i<3; i++)
    {
      printf("x[%d] = %lu\n", i,(unsigned long int) x[i] );
    }
  printf("\nPrinting using incremented pointers\n");
  int * p= &x;
   printf("Element\t Value\t Address\t\n");
  for( i=0; i<3; i++)
    {
      for( j=0; j<3; j++)
	{
	  printf("x[%d][%d]\t %d\t %lu\t\n",i,j, *p ,(long unsigned int)p );
	  p++;
	}
    }
   printf("\nPrinting using unincremented pointers\n");
  int * q;
  q = &x[0][0];
  
   printf("Element\t Value\t Address\t\n");
  for( i=0; i<3; i++)
    {
      for( j=0; j<3; j++)
	{
	  printf("x[%d][%d]\t %d\t %lu\t\n",i,j, *(q+3*i) ,(long unsigned int)(q+3*i) );
	  p++;
	}
    }
}
