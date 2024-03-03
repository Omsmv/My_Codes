#include<stdio.h>

void main()
{
  char C[3][30]={"India","United States of America","Switzerland"},*p[3];
  int i;
  p[0]=C[0];
  p[1]=C[1];
  p[2]=C[2];

  printf("\nPrinting the contents of array in Array format");

  for(i=0;i<3;i++)
    printf("\nC[%d]=%s",i,C[i]);

  printf("\n\nPrinting the contents of array in Pointer format");

  for(i=0;i<3;i++)
    printf("\np[%d]=%s",i,p[i]);

  printf("\n\nPrinting the contents of array in Array format by incrementing to 5 characters");

  for(i=0;i<3;i++)
    printf("\nC[%d]=%s",i,C[i]+5);

  printf("\n\nPrinting the contents of array in Pointer format by incrementing to 5 characters");

  for(i=0;i<3;i++)
    printf("\np[%d]=%s",i,p[i]+5);

  printf("\n\nPrinting the contents of array in Array format by incrementing to 6 characters");

  for(i=0;i<3;i++)
    printf("\nC[%d]=%s",i,C[i]+6);

  printf("\n\nPrinting the contents of array in Pointer format by incrementing to 6 characters");

  for(i=0;i<3;i++)
    printf("\np[%d]=%s",i,p[i]+6);
}
  
  
