#include <stdio.h>
#include <stdlib.h>
float exp1(float x, int n)
{
 float p=1;
 int i;
 for(i=0;i<n;i++)
   p=p*x;
 return p;
}

int main ()
{
 float x,p;
 int n;
 printf("Entrer deux entiers\n");

 scanf("%f%d",&x,&n);
 p= exp1(x,n);

 printf("%f puissance %d est %f\n",x,n,p);

 return 0;
}
