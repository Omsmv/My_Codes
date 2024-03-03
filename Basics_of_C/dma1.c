#include<stdio.h>
#include<stdlib.h>
struct student
{
  char name[20];
  int rollno ;
};
void main()
{
  typedef  struct student candidate;
  candidate *p,*table;
  int class_size=3;
  p=(candidate*)calloc(class_size,sizeof(candidate));
  int i;
  for(i=0,table=p;i<class_size;i++,table++)
    {
      printf("enter details of student %d",i+1);
      printf("name\n");
      scanf("%s",table->name);
      printf("roll no.\n");
      scanf("%d",&table->rollno);
    }
  printf("The details are:\n");
  for(i=0,table=p;i<class_size;i++,table++)
    {
      
      printf("student %d\n",i+1);
      printf("name : %s\n",table->name);
      printf("roll no : %d\n",table->rollno);
    }
}
		    
