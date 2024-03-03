#include<stdio.h>
#include<math.h>
void main()
{
  int i=1;
  double error,x,low,high,g;
  printf("enter the number:");
  scanf("%lf",&x);
  printf("enter the low approximation value:");
  scanf("%lf",&low);
  printf("enter the high approximation value:");
  scanf("%lf",&high);
  while(fabs(g*g-x)>=1e-6)
    {
      g=(low+high)/2;
      error=g*g-x;
   printf("iteration:%d low:%lf high:%lf g:%lf error:%lf\n",i,low,high,g,error);
  if(error>0)
	high=g;
	else if(error<0)
	  low=g;
	     i++;
    }
  printf("sq root of the no:%lf\n",g);
}
      
