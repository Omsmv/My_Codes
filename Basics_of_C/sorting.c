#include<stdio.h>
#include<string.h>

void sort(char A[100][100], int n)
{
  int i,j;
  char temp[100];
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
      {
	if(strcmp(A[i],A[j])>1)
	  {
	    strcpy(temp,A[i]);
	    strcpy(A[i],A[j]);
	    strcpy(A[j],temp);
	  }
      }
}


void main()
{
  char A[100][100];
  int n,i;
  printf("\nEnter the no. of strings to be added : ");
  scanf("%d",&n);
  printf("\n Enter the strings:\n"); 
  for(i=0;i<n;i++) 
    scanf("%s",A[i]);
  printf("\n Before Sorting strings:\n"); 
  for(i=0;i<n;i++) 
    printf("%s\n",A[i]);
  sort(A,n);
  printf("\n After Sorting strings:\n"); 
  for(i=0;i<n;i++) 
    printf("%s\n",A[i]);
}
    
