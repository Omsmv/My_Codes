#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check_palindrome(char ch[],int i)
{
  int l=strlen(ch)-(i+1);
  if(tolower(ch[i])==tolower(ch[l]))
    {
      if(i==l||i+1==l)
	  //printf("\nThe entered string i palindrome");
	  return 1;
      return check_palindrome(ch,i+1);
    }

  else
    //printf("\nEntered string is not a palindrome!!");
	return 0;
}

void main()
{
  char S[100];
  printf("\nEnter a string: ");
  scanf("%s",S);
  int k=check_palindrome(S,0);
  if(k==1)
      printf("\nThe entered string is palindrome");
  else
      printf("\nEntered string is NOT a palindrome!!");
}
