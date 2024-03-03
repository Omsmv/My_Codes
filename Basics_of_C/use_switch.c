#include<stdio.h>

void main()
{
  int marks,p;
  char g;

  label: printf("\nEnter your marks(0-100):");
  scanf("%d",&marks);

  if(marks<0 || marks>100)
    {
      printf("\nMarks are not entered in the range, Please Try Again!!!!");
      goto label;
    }

  p=marks/10;

  switch(p)
    {
      case 10:
      case 9: g='O';
	      break;
      case 8: g='A';
              break;
      case 7:
      case 6: g='B';
	      break;
      case 5: g='C';
              break;
      case 4: g='D';
              break;
      default: g='F';
    }
  printf("\nYour grade is:%c\n",g);
}
	
  
