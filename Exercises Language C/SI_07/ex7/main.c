#include <stdio.h>
#include <stdlib.h>
int f(int t1[], int t2[], int n)
{
 int i, nb;
 for(i=0;i<n;i++)
   if((t1[i]<=10)&&(t1[i]>=0))
   {
		 t2[i]=t1[i];
		 nb++;
   }

	 return nb;
}

int main ()
{
	int i, nb, t1[5], t2[5];
	for (i=0; i<5; i++)
 	{
		printf("Entrer la valeur de t1[%d]:",i);
   	scanf("%d", &t1[i]);
	 }

	for(i=0;i<5;i++)
    t2[i] = -1;

	nb= f(t1,t2,5);

 	for(i=0;i<5;i++)
	 printf("La valeur de t2[%d] est :%d\n",i,t2[i]);

 	return 0;
}

