#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int A,B;
   printf("Entrer la valeur de A :\n");
   scanf("%d",&A);
   printf("Entrer la valeur de B :\n");
   scanf("%d",&B);
   if (fabs(A) > fabs(B))
	if (A<0) printf("valeur negative\n");
	else printf("valeur positive\n");
   else
	if (B<0) printf("valeur negative\n");
        else printf("valeur positive\n");

 system("pause");

   return 0;
}

