#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i,j;
 int mat[4][4];

 // initialisation de la matrice
 for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de mat[%d][%d]:",i,j);
			scanf("%d", &mat[i][j]);
   }

 // mise à zéro des élements de la diagonale
 for(i=0;i<4;i++)
   mat[i][i] =0;
 // affichage de la matrice
 for(i=0;i<4;i++)
 {
   for(j=0;j<4;j++)
	   printf("%d \t",mat[i][j]);
   printf("\n");
	 printf("\n");
  }

	system("pause");
  return 0;
}
