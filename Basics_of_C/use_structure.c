#include<stdio.h>
struct sem
  {
    char subject[2][20];
    int submarks[2];
    float spi;
  };
  struct students
  {
    int Roll_No;
    char name[50];
    struct sem markss[2];
    int semester;
    float cpi;
  };
void main()
{
  struct sem markss[2];
  struct students student[3];
  int i=0,j=0,k=0,l=0;
  float spi=0,cpi=0;
   for(i=0;i<3;i++)
    {
      printf("Enter Roll No and name of student%d:",i+1);
      scanf("%d %s",&student[i].Roll_No,student[i].name);
      }
  for(l=0;l<3;l++)
    {
      cpi=0;
      for(j=0;j<2;j++)                                           //denotes semester
	{
	  spi=0;
	  printf("semester%d",j+1);
	  for(k=0;k<2;k++)                                       //denotes subject marks
	    {
	      printf("Enter subject name and marks:\n"); 
	      scanf("%s %d",student[l].markss[j].subject[k],&student[l].markss[j].submarks[k]);
	      spi=(spi+student[l].markss[j].submarks[k]);
	       
	    }
	  student[l].markss[j].spi=spi/2;
	  cpi=cpi+student[l].markss[j].spi;
	}
      student[l].cpi=cpi/2;
    }
  printf("Roll  Name\tCPI\tSem\tSPI\tSubject\tGrade\n");
  for(i=0;i<3;i++)
    {
      printf("%d\t%s\t%5.2f",student[i].Roll_No,student[i].name,student[i].cpi);
      for(j=0;j<2;j++)
	{
	  if(j!=0)
	    printf("                   ");
	  printf("\t%d\t%5.2f",j+1,student[i].markss[j].spi);
	  for(k=0;k<2;k++)
	    {
	      if(k!=0)
		printf("                                     ");
	      printf("\t%s\t%d",student[i].markss[j].subject[k],student[i].markss[j].submarks[k]);
	      printf("\n");
	    }
	  printf("\n");
	}
      printf("\n");
    }
}








  
 
