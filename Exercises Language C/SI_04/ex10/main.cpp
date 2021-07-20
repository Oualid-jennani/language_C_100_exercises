#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int n,U1=1,U2=1,Un, i;
	 printf("Entrez le rang n de Un a calculer : ");
	 scanf("%d",&n);
	 for (i=3;i<=n;i++)
	 {
	  Un=U1+U2;
	  U1=U2;
	  U2=Un;
	 }
	 printf("le terme Un est : %d\n",Un);
	 return 0;
}
