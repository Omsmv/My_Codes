#include <stdio.h>

int multiplication(int m, int n)
{

int c = m*n;
return c;

}

void main()
{

int a, b, c;
a = 3;
b = 2;
c = multiplication(a,b);
printf("multiplication (%d,%d): %d\n", a, b, c);

}

