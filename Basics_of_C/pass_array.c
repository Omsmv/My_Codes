#include<stdio.h>

void sort(int A[50], int n)
{
  int i, j, temp;
  for(i=0;i<n-1;i++)
    for(j=0+i;j<n;j++)
	if(A[i]>A[j])
	  {
	    temp=A[i];
	    A[i]=A[j];
	    A[j]=temp;
	  }
}

void main()
{
  int A[50],n,i;
  printf("Enter the no. of elements in A(max 50):");
  scanf("%d",&n);
  printf("\nEnter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);
  printf("\nArrays before sorting:\n");
  for(i=0;i<n;i++)
    printf("%d\t",A[i]);
  sort(A,n);
  printf("\nArrays after sorting(In Ascending Order:\n");
  for(i=0;i<n;i++)
    printf("%d\t",A[i]);
}
	 
