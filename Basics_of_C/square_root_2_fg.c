#include<stdio.h>
#include<math.h>

void main()
{
  double x,g,e;
  int i=0;
  
  label: printf("\nEnter a no.:");
  scanf("%lf",&x);
  
  if(x<0)
    {
      printf("\nThe no. is negative");
      goto label;
    }
  g=x/2;
  e=fabs(g*g-x);
  
  while(e>0.0001)
    {
      if(i>100)
	break;
      
      printf("\nIteration=%d \tGuess=%lf \tError=%lf",i,g,e);
      if(g*g==x)
        break;
      
      else
       	  g=(g+x/g)/2;
      
      i++;
      e=fabs(g*g-x);   
    }
  
  printf("\nThe square root of %f is : %.6f\n",x,g);
}
