#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float f(int x)
{
 float p;
 p = sin(x)+log(x)-sqrt(x);
 return p;
}

int main ()
{
 float p;
 int i;
 for(i=1;i<=10;i++)
 {
   p=f(i);
   printf("la valeur de f(%d) est : %f\n",i,p);
 }

 return 0;
}
