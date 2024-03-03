#include <stdio.h>
#include <math.h>
#define function(g) ((g*g)-x)
#define derivative(g) (2*g)
void main()
{
  float x,g=1,error;
  int i=1;
  printf("Enter the number whose square root you want to compute:");
  scanf("%f",&x);
  while(fabsf(g*g-x)>=0.000001)
    {
      error=g*g-x;
      printf("iteration=%d,guess=%f,error=%f\n",i,g,error);
      g=g-((function(g))/(derivative(g)));
      i++;
    }
}
      
      
  
