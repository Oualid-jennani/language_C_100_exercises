#include<stdio.h>
#include<stdlib.h>

int main()
{
	 int a,b,c,tmp;
	 printf("entrer la valeur de a, b et c\n");
	 scanf("%d %d %d",&a,&b,&c);
	 printf(" a=%d,b=%d et c=%d\n",a,b,c);

	 //permutation des valeurs des variables
	 tmp=b;
	 b=a;
	 a=c;
	 c=tmp;

	 //affichage des valeurs des variables
	 printf(" a=%d,b=%d et c=%d\n",a,b,c);

}
