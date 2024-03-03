#include<stdio.h>
void main ()
{
  int i =1;
  int *p;
  p = &i;
  printf("Value of i = %d\n",i);
  printf("Value of i is %d and its address is %lu\n",*p,(long unsigned int)p);
  printf("Value of *p= %d\n",i);
  printf("The value of *p is %d and its address is %lu\n",*p,(long unsigned int)p);


  int j = *p;
  *p = 2;
  printf("The value of i is %d and its address is %lu\n",*p,(long unsigned int)p);
  printf("The value of j is %d and its address is %lu\n",*p,(long unsigned int)p);
  printf("The value of i is %d and its address is %hd\n",*p,(short int)p);
  printf("The value of j is %d and its address is %ld\n",*p,(long int)p);




  char a = '5';
  char *l = &a;
  printf("The sizeof integer pointer is %lu and a character pointer is %lu\n",sizeof(p),sizeof(l));
}
