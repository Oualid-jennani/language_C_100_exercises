#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i,j, somme=0;
  int mat[4][4];

  // initialisation de la matrice
	for(i=0;i<4;i++)
	 for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de mat[%d][%d]:",i,j);
			scanf("%d", &mat[i][j]);
   }

	 // affichage de la matrice et calcul de la somme de tous ses élements
	 for(i=0;i<4;i++)
	 {
		for(j=0;j<4;j++)
		{
	 	  printf("%d \t",mat[i][j]);
	 	  somme +=mat[i][j];
		}
     printf("\n");
	 	 printf("\n");
	 }

	 // affichage de la somme des élements de la matrice
	 printf("la somme des élements est : %d\n",somme);

  system("pause");
  return 0;
}
