#include <stdio.h>
#include <stdlib.h>
int main()
{
 int T[10];
 int i,j=0, V;
 for (i=0; i<10; i++)
 {
   printf("Entrer la valeur de T[%d]:",i);
   scanf("%d", &T[i]);
 }
   //3.Rechercher si une valeur se trouve dans le tableau :
  printf("Entrez la valeur recherchee :");
  scanf("%d",&V);
  while ((T[j]!=V) && (j<=10))
      j++;
  if (j<10) printf("Valeur trouvee a l'indice : %d \n",j);
  else printf("Valeur non trouvee\n");

 return 0;
}
