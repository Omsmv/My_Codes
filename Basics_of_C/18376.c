

//  Name: Om Mahesh Vaknalli  //
//  Roll Number: 18376  //


#include<stdio.h>
#include<string.h>

void main()
{
    unsigned short int x,y;                                                        // Question (1):- //
  unsigned int z;

  printf("Enter the 1st non-negative number not exceeding 65535: ");
  scanf("%hu",&x);
  printf("Enter the 2nd non-negative number not exceeding 65535: ");
  scanf("%hu",&y);

  z = x + y;

  printf("The addition of the entered numbers is: %d\n",z);



    char S1[100],S2[100],*s;                                                       // Question (2):- //
  unsigned short int count;

  printf("Enter the first string not exceeding 100 characters: ");
  gets(S1);
  printf("Enter the second string not exceeding 100 characters: ");
  gets(S2);

  s = S1;
  for(count = 0; s = strstr(s,S2) != NULL; count++)
    {
      s = s + strlen(S2);
    }

    printf("The occurence of the second string in the first string is: %hu",count);



  unsigned short int h,i,a = 91,b = 100,A[12];                                     // Question (3):- //
  unsigned short int B[51] = { 43 , 65 , 51 , 27 , 79 , 11 , 56 , 61 , 82 ,  9 , 25 , 36,  07,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,36,63,12,21,73,49,51,19,39,49,68,93,85,59};

  for(h = 0 ; h <= 10 && b >= 0; h++)
    {
      A[h] = 0;
      for(i = 0; i <= 49; i++)
	{
	  if(B[i] >= a && B[i] <= b)
	    {
	      A[h] = A[h] + 1;
	    }
	  else
	    {
	      continue;
	    }
	}
      a = a - 10;
      b = b - 10;
    }

  printf("The number of students with marks belonging to each category are: \n\n");
  printf("     Range     No. of students     \n");
  for(h = 0, a = 91, b = 100; h <= 9 ; h++, a = a - 10, b = b - 10)
    {
      printf("   %4hu-%3hu         %2hu        \n",a,b,A[h]);
    }
  printf("   %4hu-%3hu         %2hu        \n",0,0,A[10]);
}
