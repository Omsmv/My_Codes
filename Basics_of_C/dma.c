#include<stdio.h>
void main()
{
  int *p,*table,size,i;
  printf("enter size of the array\n");
  scanf("%d",&size);
  p=(int*)malloc(size*sizeof(int));
  if(p!=NULL)
    {
      p=table;
      printf("enter the array\n");
      for(i=0;i<size;i++)
	{
	  scanf("%d",p++);
	}
      for(p=table;p<table+size;p++)
	{
	  printf("%d is stored at %lu\n",*p,(unsigned long int)p);
	}
    }
  free(p);
}
