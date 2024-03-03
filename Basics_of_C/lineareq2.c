#include<stdio.h>
void main()
{
  int nH,nL,nchi,ncow,nspi,tt;
  printf("Enter total number of head\n");
  scanf("%d",&nH);
  printf("Enter total number of leg\n");
  scanf("%d",&nL);
  if(nH<<nL)
    {
     for(nchi=0;nchi<=nH;nchi++)
      {
       tt=nH-nchi;
       for(ncow=0;ncow<=tt;ncow++)
	 {
	   nspi=tt-ncow; 
           if(2*nchi+4*ncow+8*nspi==nL)
            {
	      printf("number of chickens is %d\n",nchi);
	      printf("number of cows is %d\n",ncow);
	      printf("number of spiders is %d\n",nspi);
	     break;
            }
	 }
       }
    }
  else
    {
      printf("there is no solution\n");
    }
  
}
