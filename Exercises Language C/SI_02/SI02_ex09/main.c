#include <stdio.h>
#include <stdlib.h>
int main ()
{
   float a, b, x;
   printf("Entrez les valeurs de a et b : ");
   scanf("%f %f",&a,&b);
   if (a!= 0)
   {
    x=-b/a;
    printf("le resultat est : %f\n",x);
   }
   else if (b==0)
   printf("Tout reel est solution\n");
   else printf("Pas de solution\n");

   return 0;
}
