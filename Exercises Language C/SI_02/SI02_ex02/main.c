#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
   float A, B, RES;
   printf("Introduire les valeurs de A et B : ");
   scanf("%f %f", &A, &B);

   RES = pow(A,2);
   printf("Le carré de A est %f \n", RES);

   RES = pow(B,2);
   printf("Le carré de B est %f \n", RES);

   RES = pow(A,B);
   printf("A exposant B est %f \n", RES);

   RES = sin(A)/cos(A);
   printf("La tangente de A est %f \n", RES);

   RES = floor(A/B);
   printf("La valeur arrondie en moins de A/B est %f \n", RES);

   printf("La valeur arrondie en moins à trois positions de A/B est %.3f \n", RES);

   return 0;
}
