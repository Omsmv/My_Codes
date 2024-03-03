#include<stdio.h>
#include<math.h>
#define square(x) (x)*(x)
#define abs(x) x>0?x:-x
#define cube(x) (square(x)*(x))
#define PI 3.1416
#define MAX 180
#define sind(x) sin((PI/MAX)*(x))
#define max(a,b) a>b?a:b
#define min1(a,b) a>b?b:a
#define min2(a,b,c) (min1(a,b)>c?c:min1(a,b))

void main()
{
  float x,y,a,b;
  printf("Enter the number whose square has to be computed:");
  scanf("%f",&x);
  y=square(x);
  printf("The square of %f is %f\n",x,y);

  printf("Enter the number whose absolute value has to be computed:");
  scanf("%f",&x);
  y=abs(x);
  printf("The absolute value of %f is %f\n",x,y);

  printf("Enter the number whose cube has to be computed:");
  scanf("%f",&x);
  y=cube(x);
  printf("The cube of %f is %f\n",x,y);

  printf("Enter the angle in degrees:");
  scanf("%f",&x);
  y=sind(x);
  printf("The value of sin is:%f\n",y);

  printf("Enter the two numbers:");
  scanf("%f %f",&x,&y);
  a=max(x,y);
  printf("The maximum of %f and %f is %f\n",x,y,a);

  printf("Enter the three numbers:");
  scanf("%f %f %f",&x,&y,&a);
  b=min2(x,y,a);
  printf("The minimum of %f, %f and %f is %f",x,y,a,b);
}

  
