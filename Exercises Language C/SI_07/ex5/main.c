#include <stdio.h>
#include <stdlib.h>
int CALC_SUITE(int n)
{
 int i,U1=1,U2=1,Un;
 for (i=3;i<=n;i++)
 {
  Un=U1+U2;
  U1=U2;
  U2=Un;
 }
 return Un;
}

int main()
{
 int i,n, p;
  printf("Entrer un nombre\n");

 scanf("%d",&n);
 for(i=3;i<=n;i++)
 {
   p = CALC_SUITE(i);
	 printf("le terme U(%d) est : %d\n",i,p);
 }

 return 0;
}
