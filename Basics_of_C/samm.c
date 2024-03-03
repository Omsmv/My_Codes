#include<stdio.h>
void main()
{
  int j,max=0,min=999;
  printf("Enter the number of entries in set\n");
  scanf("%d",&j);
  printf("Enter the number\n");
  int a[j],i=0,s=0;
  float A;
  while(i<j)
    {
      scanf("%d",&a[i]);
      s=s+a[i];
      if(a[i]>max)
	{
	  max=a[i];
	}
      if(a[i]<min)
      {
	min=a[i];
      }
      i++;
    }
  A=s/j;
  printf("the sum of the givien number %d\n",s);
  printf("The Average of givien number %5.2f\n",A);
  printf("the minimum number is %d\n",min);
  printf("the maximum number is %d\n",max);
}
