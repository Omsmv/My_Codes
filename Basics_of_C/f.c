#include<stdio.h>
struct inventory
{
  char name[30];
  int number;
  float price;
};
void main()
{
  FILE *fp;
  char *filename="C.txt";
  char c;
  fp=fopen(filename,"w");
  if(fp==NULL)
    return;
  printf("Data Input: ");
  while((c=getchar()) !=EOF)
    putc(c,fp);
  fclose(fp);
  
  fp=fopen(filename,"r");
  printf("\nData output: ");
  while((c=getc(fp)) !=EOF)
    putchar(c);
  printf("\n");
  fclose(fp);

  int w;
  fp=fopen(filename,"w");
  printf("Enter 1 to start a new inventory\n");
  do
    {
      scanf("%d",&w);
      putw(w,fp);
    }
  while(w != 1);
    fclose(fp);

  fp=fopen(filename,"r");
  while((w=getw(fp))!=EOF)
    printf("%d",w);
  fclose(fp);

  char name[30];
  int number;
  float price;
  fp=fopen(filename,"w");
  printf("\nEnter Inventory\n");
  printf("\nName\tNumber\tPrice\n");
  for(int i=0;i<3;i++)
    {
      fscanf(stdin,"%s %d %f",name,&number,&price);
      fprintf(fp,"%30s\t%d\t%f\n",name,number,price);
    }
  fclose(fp);

  fp=fopen(filename,"r");
  printf("\nReading Inventory\n");
  printf("\nName\tNumber\tPrice\n");
  for(int i=0;i<3;i++)
    {
      fscanf(fp,"%s %d %f",name,&number,&price);
      fprintf(stdout,"%s\t%d\t%f\n",name,number,price);
    }
  fclose(fp);

  fp=fopen(filename,"a");
  printf("\nAppend inventory\n");
  printf("\nName\tNumber\tPrice\n");
  fscanf(stdin,"%s %d %f",name,&number,&price);
  fprintf(fp,"%30s\t%d\t%f\n",name,number,price);
  fclose(fp);

  fp=fopen(filename,"a+");
  printf("\nReading Inventory\n");
  printf("\nName\tNumber\tPrice\n");
  for(int i=0;i<4;i++)
    {
      fscanf(fp,"%s %d %f",name,&number,&price);
      fprintf(stdout,"%s\t%d\t%f\n",name,number,price);
    }

  rewind(fp);
  printf("\nReading Inventory\n");
  printf("\nName\tNumber\tPrice\n");
  long int li=-1;
  int i;
  for(i=1;i<=4;i++)
    {
      fscanf(fp,"%s%d%f",name,&number,&price);
      fprintf(stdout,"%s\t%d\t%f\n",name,number,price);
    }
      printf(" (Current Position : %ld)\n",ftell(fp));
      fseek(fp,li+i*(sizeof(struct inventory)+2),0);
      printf(" (Position Shifting : %ld)\n",ftell(fp));
      long int ia,pos;
      fprintf(stdout,"Which Inventory to access? ");
      fscanf(stdin,"%ld",&ia);
      pos=li+ia*(sizeof(struct inventory)+2);
      if(pos<0)
	fseek(fp,pos,0);
      printf("Position : %ld\n",ftell(fp));
      fscanf(fp,"%s%d%f",name,&number,&price);
      fprintf(stdout,"%s\t%d\t%f\n",name,number,price);
      fclose(fp);
}

      
