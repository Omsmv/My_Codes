#include<stdio.h>
#include<math.h>

double y1(double x)
{
  return x*x;
}

double sin_d(double d)
{
  return sin((3.14*d)/180);
}

double cos_a(double a)
{
  return cos((3.14*a)/180);
}

double y2(double x1,double x2)
{
  return x1*x1+x2*x2;
}

double table(double (*f)(), double min, double max, double step)
{
  double z,value;
  for(z=min;z<=max;z+=step)
    {
      value=(*f)(z);
      printf("\n%6.2f%12.2f",z,value);
    }
}

double table_new(double (*f)(), double min, double max, double step)
{
  double z,value;
  for(z=min;z<=max;z+=step)
    {
      value=(*f)(z);
      printf("\n%6.2f%6.2f%12.2f",z,z,value);
    }
}

void main()
{
  printf("The table of y=x^2 from 0 to 2 is: ");
  printf("\n\n%5s%14s","x","Value");
  printf("\n---------------------------------");
  table(y1,0.0,2.0,0.5);
  printf("\n\n\nThe table of sin(x) from 0 to 180 is: ");
  printf("\n\n%5s%14s","Angle","Value");
  printf("\n---------------------------------");
  table(sin_d,0.0,180.0,45.0);
  printf("\n\n\nThe table of cos(x) from 0 to 180 is: ");
  printf("\n\n%5s%14s","Angle","Value");
  printf("\n---------------------------------");
  table(cos_a,0.0,180.0,45.0);
  printf("\n\n\nThe table of y=x1^2+x2^2 from 0 to 180 is: ");
  printf("\n\n%5s%5s%14s","x1","x2","Value");
  printf("\n---------------------------------");
  table_new(y2,0.0,2.0,0.5);
}
