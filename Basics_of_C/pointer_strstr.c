#include<stdio.h>
#include<string.h>

void main()
{
  char str1[100],str2[50],*s;
  int count=0;
  printf("Enter a string:\n");
  gets(str1);
  printf("Enter a sub-string:\n");
  gets(str2);
  s=str1;

  while((s=strstr(s,str2))!='\0')
    {
      count++;
      s=s+strlen(str2);
    }

  printf("\nNo. of occurence is:%d",count);
}
  
