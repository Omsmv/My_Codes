#include <stdio.h>
struct inventory
{
  char code[5];
  int quantity;
  float rate;
  float value;
};

void main()
{
  struct inventory data[4];
  struct inventory *ptr;
  ptr=&data[0];
  float total;

 
  for(int i=0;i<=3;i++)
    {
      printf("Enter code\n");
      scanf("%s",ptr->code);
      printf("Enter quantity\n");
      scanf("%d",&ptr->quantity);
      printf("Enter rate\n");
      scanf("%f",&ptr->rate);
      ptr->value=ptr->quantity*ptr->rate;
      total+=ptr->value;
      ptr++;
    }
  ptr=&data[0];

  printf("Code\tQuantity\tRate\tValue\n");

  for(int i=0;i<=3;i++)
    {
      printf("%s\t%d\t%f\t%f\n",ptr->code,ptr->quantity,ptr->rate,ptr->value);
      ptr++;
    }
  printf("\t\t\tTotal=%f\n",total);
}
      
  
