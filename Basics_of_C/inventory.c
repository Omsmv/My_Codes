#include<stdio.h>
void main()
{
  int q1,q2,q3,q4;
  float r1,r2,r3,r4;
  printf("Quantity\n Rate\n");
  scanf("%d %f",&q1,&r1);
  scanf("%d %f",&q2,&r2);
  scanf("%d %f",&q3,&r3);
  scanf("%d %f",&q4,&r4);
  float v1,v2,v3,v4;
  v1=q1*r1;
  v2=q2*r2;
  v3=q3*r3;
  v4=q4*r4;
  printf("----------------------------------------------\n");
  printf("  Code     Quantity      Rate       Value\n");
  printf("----------------------------------------------\n");
  printf(" \"F105\"    %d            %f         %f\n",q1,r1,v1);
  printf(" \"H220\"    %d            %f         %f\n",q2,r2,v2);
  printf(" \"I109\"    %d            %f         %f\n",q3,r3,v3);
  printf(" \"M331\"    %d            %f         %f\n",q4,r4,v4);
  printf("----------------------------------------------\n");
  float total=v1+v2+v3+v4;
  printf("                               Total  %f\n",total);
  
}
