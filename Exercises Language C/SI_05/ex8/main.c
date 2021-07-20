#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int U[10],V[10],i;
  for (i=0; i<10; i++)
  {
      printf("Entrer la valeur de U[%d]:",i);
      scanf("%d", &U[i]);
   }

   for (i=0; i<10; i++)
   {
    printf("Entrer la valeur de V[%d]:",i);
    scanf("%d", &V[i]);
   }

  int PS=0;
  for(i=0;i<10;i++)
     PS=PS + (U[i]*V[i]);//fin boucle for
  printf("Le produit scalaire des 2 vecteurs U et V est : %d\n",PS);

  return 0;
}
