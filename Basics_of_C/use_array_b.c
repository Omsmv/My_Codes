#include<stdio.h>

void Product(int A[][50], int B[][50],int r1,int c1, int r2, int c2)
{
  int C[r1][c2], i,j,k;
  for(i=0;i<r1;i++)
      for(j=0;j<c2;j++)
        C[i][j]=0;
    
  printf("\nMultiplication of matrix is :\n");
  for(i=0;i<r1;i++)
      for(j=0;j<c2;j++)
          for(k=0;k<r2;k++)
	      C[i][j]+=A[i][k]*B[k][j];

  for(i=0;i<r1;i++)
    {
      printf("\n");
      for(j=0;j<c2;j++)
        printf("%d\t",C[i][j]);
    }
       
    
}
void Enter(int X[][50],short int r,short int c)
{
  int i, j;
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&X[i][j]);
}

void main()
{
  int A[50][50],B[50][50];
  short int R1,C1,R2,C2;
  printf("Enter the row and columns(max 50) for Matrix A: ");
  scanf("%hd %hd",&R1,&C1);
  printf("Enter the row and columns(max 50) for Matrix B: ");
  scanf("%hd %hd",&R2,&C2);
  if(C1==R2)
    {
      printf("Multiplication is possible: ");
      printf("\nEnter the elements of matrix A:\n");
      Enter(A,R1,C1);
      printf("\nEnter the elements of matrix B:\n");
      Enter(B,R2,C2);
      Product(A,B,R1,C1,R2,C2);
    }
  else
    printf("\nMultiplication is not possible");
}
