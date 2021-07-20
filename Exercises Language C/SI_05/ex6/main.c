#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int i, compt_neg=0,compt_pos=0,j=0;
  float S=0.0,max,V,moy,T[10];

  for (i=0; i<10; i++)
 {
   printf("Entrer la valeur de T[%d]:",i);
   scanf("%f", &T[i]);
 }
  max=T[0];
  for (i=1;i<10;i++)
      if (T[i]>max) max=T[i];
  printf("Le maximum des valeurs du tableau est : %.2f\n",max);

  for (i=0;i<10;i++)
      if (T[i]<0)compt_neg++;
  printf("Le nombre de valeurs negatives du tableau est : %d\n",compt_neg);
  for (i=0;i<10;i++)
      if (T[i]>0)
      {
         S=S+T[i];
         compt_pos++;
       }
  moy=S/compt_pos;
  printf("La somme des valeurs strictement positives du tableau est : %.2f\n",S);
  printf("La moyenne des valeurs strictement positives du tableau est : %.2f\n",moy);
   printf("Affichage des valeurs du tableau * 5 :\n");
   for (i=0;i<10;i++)
      printf("%10.2f",5*T[i]);
  printf("\n");

  return 0;
}
