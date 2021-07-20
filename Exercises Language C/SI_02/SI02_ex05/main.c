#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
 long A=15;
 char B='A';
 short C=10;
 short res;

 res = C+3;
 printf("Expression 1 est : %d \n", res);

 res = B+1;
 printf("Expression 2 est : %c \n", res);

 res = B+C;
 printf("Expression 3 est : %c \n", res);

 res = 3*C+2*B;
 printf("Expression 4 est : %c \n", res);

  return 0;
}

