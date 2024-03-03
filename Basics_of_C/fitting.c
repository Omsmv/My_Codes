#include<stdio.h>
#include<math.h>
void main()
{
  int n,i,x[20],y[20],sumx=0,sumx2=0,sumy=0,sumxy=0;
  float m,c;
  printf("Enter the number of points you want to input:");
  scanf("%d",&n);
  printf("Enter the values of x:");
  for(i=0;i<=n-1;i++)
    {
      scanf("%d",&x[i]);
    }
  printf("Enter the values of y:");
  for(i=0;i<=n-1;i++)
    {
      scanf("%d",&y[i]);
    }
  for(i=0;i<=n-1;i++)
    {
      sumx=sumx+x[i];
      sumx2=sumx2+x[i]*x[i];
      sumy=sumy+y[i];
      sumxy=sumxy+x[i]*y[i];
    }
  m=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
  c=(sumy-m*sumx)/n;
  printf("The equation of the fitted line is: y=%fx+%f",m,c);
}
