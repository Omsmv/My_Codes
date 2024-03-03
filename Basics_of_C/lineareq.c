#include<stdio.h>
void main()
{
  int nH,nL,nchi,ncow;
  printf("Enter total number of head\n");
  scanf("%d",&nH);
  printf("Enter total number of lag\n");
  scanf("%d",&nL);
  if(nH<<nL)
    {
     for(nchi=0;nchi<=nH;nchi++)
      {
       ncow=nH-nchi;
       if(2*nchi+4*ncow==nL)
        {
	 printf("number of chicken is %d\n",nchi);
	 printf("number of cow is %d\n",ncow);
	 break;
        }
      }
    }
  else(nH>>nL)
    {
     printf("there is no solution\n");
    }
}
