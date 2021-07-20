#include <stdio.h>
#include <stdlib.h>
int main()
{
 int A[10],nb[21],i;

 for(i=0;i<10;i++)
 {
  do
  {
    printf("Entrer la valeur de A[%d]:",i);
    scanf("%d", &A[i]);
    if((A[i]>20)||A[i]<0)
      printf("valeurs incorrecte veuillez re-entrer une nouvelle valeur\n");
  }
  while (A[i]>20 || A[i]<0);
 }

 for(i=0;i<21;i++)
   nb[i]=0;

 for(i=0;i<10;i++)
   nb[A[i]]++;

 for(i=0;i<21;i++)
   printf("Il y a %d fois l'entier %d\n",nb[i],i);

 return 0;
}
