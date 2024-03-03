#include<stdio.h>
#include<math.h>

void main()
{
  float x,g,e;
  int i=0;
  printf("\nEnter a no.:");
  scanf("%f",&x);
  if(x<0)
    printf("\nThe no. is negative");

  g=x/2;
  e=fabsf(g*g-x);
  
  do
    {
      if(i>100)
	break;
      
      printf("\nIteration=%d \tGuess=%f \tError=%f",i,g,e);
      if(g*g==x)
        break;
      
      else
       	  g=(g+x/g)/2;
      
      i++;
      e=fabsf(g*g-x);   
    }while(e>0.0001);
  
  printf("\nThe square root of %f is : %.6f\n",x,g);
}
