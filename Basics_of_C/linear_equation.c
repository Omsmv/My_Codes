#include<stdio.h>

void main()
{
     int nCh,nC,nH,nL,flag=0;

     printf("\nEnter the no. of Heads: ");
     scanf("%d",&nH);
     printf("\nEnter the no. of Legs: ");
     scanf("%d",&nL);

     for(nCh=0;nCh<=nH;nCh++)
     {
       nC=nH-nCh;

       if(2*nCh+4*nC==nL&&nCh>=0&&nC>=0)
	 {
	   printf("\nNo.of Chickens=%d \tNo.of Cows:%d\n",nCh,nC);
	   flag=1;
	 }
     }

     if(!flag)
       printf("\nNo Solution exists");
}
