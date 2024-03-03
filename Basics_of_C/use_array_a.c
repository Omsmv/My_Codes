#include<stdio.h>

void Add(int A[][50], int B[50][50],int r,int c)
{
  int C[50][50],i,j;
  printf("\nSum of the two matrices is:\n");
  for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
      {
	C[i][j]=A[i][j]+B[i][j];
	printf("%d\t",C[i][j]);
      }
     printf("\n");
    }
}

void Subtract(int A[][50], int B[50][50],int r,int c)
{
  int C[50][50],i,j;
  printf("\nDifference of two matrices is :\n ");
  for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
      {
	C[i][j]=A[i][j]-B[i][j];
	printf("%d\t",C[i][j]);
      }
     printf("\n");
    }
}

void Enter(int X[][50],int r, int c)
{
  int i, j;
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&X[i][j]);
}

void main()
{
  int A[50][50],B[50][50],R,C;
  printf("Enter the row and columns(max 50) for both matrices: ");
  scanf("%d %d",&R,&C);
  printf("\nEnter the elements of matrix A:\n");
  Enter(A,R,C);
  printf("\nEnter the elements of matrix B:\n");
  Enter(B,R,C);
  Add(A,B,R,C);
  Subtract(A,B,R,C);
}
