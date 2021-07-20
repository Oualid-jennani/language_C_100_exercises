#include <stdio.h>
#include <stdlib.h>
int main ()
{ int i,j;
 for (i=1;i<=10;i++)
 {
     for (j=1;j<=10;j++)
     printf("%d\t",i*j);//\t pour tabulation lors de l'affichage
     printf("\n");//retour à la ligne après l'affichage de chaque ligne
 }

 return 0;
}
