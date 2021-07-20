#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int t[10],i,j,indice;

 //lecture du tableau :
  for (i=0; i<10; i++)
 {
   printf("Entrer la valeur de t[%d]:",i);
   scanf("%d", &t[i]);
 }

 printf("Entrer un indice (de 0 à 9) :\n ");
 scanf("%d",&indice);

 for(j=indice;j<9;j++)
    t[j]=t[j+1];
 t[9]=0;

 for(i=0;i<10;i++)
  printf("La valeur de t[%d] est :%d\n",i,t[i]);

 return 0;
}
