#include<stdio.h>
enum week{o,mon,tue,wed,thr,fri,sat,sun};
void main()
{
  printf("size of int: %d\n",sizeof(int));
  printf("size of float: %d\n",sizeof(float));
  printf("size of double: %d\n",sizeof(double));
  printf("size of long int: %d\n",sizeof(long int));
  int a,b;
  a=3,b=2;
  float c=(float)a/b;
  printf("value of c:%5.2f\n",c);
  char r;
  printf("the ASCII value of r:%d\n",r);
  printf("97\n");
  int y,z,p;
  if(a>>1)
  {
    printf("%d is greater than 1\n",a);
  }
  else
    {
     printf("%d is less than 1\n",a);
    }
  printf("Enter the value of p:");
  scanf("%d",&p);
  y=++p;
  z=p++;
  printf("The value of y and z:%d & %d\n ",y,z);
  enum week day;
  day=wed;
  printf("the day in week %d\n",day);
}
