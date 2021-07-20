#include <stdio.h>
#include <stdlib.h>
int main()
{
 int tab[5];
 int i, comp=0;
 for (i=0; i<5; i++)
 {
   printf("Entrer la valeur de tab[%d]:",i);
   scanf("%d", &tab[i]);
}
 for (i=0; i<5; i++)
   if(tab[i]>=20)
     comp++;
 printf("le nombre de valeurs supérieurs à 20 est : %d\n", comp);
 return 0;
}
