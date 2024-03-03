#include<stdio.h>
struct mult_and_div
{
  int multi;
  float div;
};
   
struct mult_and_div
multi_div(float x,float y)
{
  struct mult_and_div md;
  md.multi=x*y;
  md.div=x/y;
  return md;
}
void main()
{
  struct mult_and_div md;
  float a,b;
  printf("Enter the values of a and b:");
  scanf("%f",&a);
  scanf("%f",&b);
  md=multi_div(a,b);
  printf("Multiplication:%d\nDivision:%f",md.multi,md.div);
}
