#include <stdio.h>
#include <stdlib.h>
int main()
{
 int t[10],i, indice;

 for (i=0; i<10; i++)
 {
  printf("Entrer la valeur de t[%d]:",i);
  scanf("%d", &t[i]);
 }

 printf("Veuillez entrer l'indice de la valeur\n");
 scanf("%d",&indice);

 if((indice >0) && (indice <10))

 for (i=0; i<10; i++)
 {
  t[i]=t[i]*t[indice-1];
 }

 for (i=0; i<10; i++)
  printf("t[%d]->%d\n",i, t[i]);

 return 0;
}
