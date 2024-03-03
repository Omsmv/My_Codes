#include<stdio.h>

void main()
{
     int nCh,nC,nS,nH,nL,flag=0;

     printf("\nEnter the no. of Heads: ");
     scanf("%d",&nH);
     printf("\nEnter the no. of Legs: ");
     scanf("%d",&nL);

     for(nS=0;nS<=nH;nS++)
     {
       nC=(nL-2*nH-6*nS)/2;
       nCh=(nH-nC-nS);

       if(2*nCh+4*nC+8*nS==nL&&nCh>=0&&nC>=0&&nS>=0)
	 {
	   printf("\nNo.of Chickens=%d \tNo.of Cows:%d \tNo.of Spiders:%d\n",nCh,nC,nS);
	   flag=1;
	 }
     }

     if(!flag)
       printf("\nNo Solution exists");
}
     
  
