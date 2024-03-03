#include<stdio.h>

void change(int *p)
{
  *p=*p+10;
}

void sort(double *q,int c)
{
  int i,j;
  double temp;
  for(i=0;i<c-1;i++)
    for(j=0;j<c;j++)
      if((*(q+i))<(*(q+j)))
	{
	  temp=*(q+i);
	  *(q+i)=*(q+j);
	  *(q+j)=temp;
	}
}

double *big(double *x, double *y)
{
  return (*x>*y?x:y);
}

void main()
{
  int y;
  printf("\nEnter a no.");
  scanf("%d",&y);
  change(&y);
  printf("\nAfter calling change() the value is %d",y);

  double X[20];
  int n,i;
  printf("\nEnter the no. of elements(max 20): ");
  scanf("%d",&n);
  printf("\nEnter the elements:\n");
  for(i=0;i<n;i++)
    scanf("%lf",&X[i]);
  sort(&X[0],n);
  printf("\nAfter calling sort() the sorted array is:\n");
  for(i=0;i<n;i++)
    printf("%lf\t",X[i]);

  double a,b,*p;
  printf("\nEnter two nos. ");
  scanf("%lf%lf",&a,&b);
  p=big(&a,&b);
  printf("\nAfter calling big() the larger of the above two function is:%lf",*p);

  
}
