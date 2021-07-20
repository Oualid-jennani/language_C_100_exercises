#include <stdio.h>
#include <stdlib.h>
float moyenne(int a, int b)
{
 float p;
 p= (float)(a+b)/2;
 return p;

}
int main ()
{
 float d;
 int a, b;
 printf("Entrer deux entiers\n");

 scanf("%d%d",&a,&b);
 d= moyenne(a,b);

 printf("la moyenne de %d et %d est : %f\n",a,b,d);

 return 0;
}
