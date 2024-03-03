#include<stdio.h>
#include<math.h>

void main()
{
  float x,g,e;
  int i;
  printf("\nEnter a no.:");
  scanf("%f",&x);
  if(x<0)
    printf("\nThe no. is negative");

  g=x/2;
  
  
  for(i=0,e=fabsf(g*g-x);e>0.0001;e=fabsf(g*g-x),i++)
    {
      if(i>100)
	break;
      
      printf("\nIteration=%d \tGuess=%f \tError=%f",i,g,e);
      if(g*g==x)
        break;
      
      else
       	  g=(g+x/g)/2;       
    }
  
  printf("\nThe square root of %f is : %.6f\n",x,g);
}
