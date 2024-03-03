#include<stdio.h>
#include<ctype.h>
void main()
{
  char c;
  c=getchar();
  if(isalpha(c))
    {
      printf("it is Alphabet character.\n");
    }
  if (c>='a' && c<='z')
    {
      printf("it is lowercase character:");putchar(c);
      printf("\n");
    }
  if(c>='A' && c<='Z')
    {
      printf("it is uppercase character:");putchar(c);
      printf("\n");  
    }
  if (isdigit(c)>0)
    {
      printf("it is digit.");
      printf("\n");
    }
  if(isalnum(c))
    {
      printf("it is alphnumeric character.\n");
    }
  int a,b,f,d,e;
  a=45;
  b=37;
  f=7*a;
  d=30*a;
  e=f+d;
  printf("           %d\n",a);
  printf("         * %d\n",b);
  printf("        -----------\n");
  printf("30*45 is   %d\n",d);
  printf("7*45 is     %d\n",f);
  printf("        -----------\n");
  printf("add        %d\n",e);
 
}
