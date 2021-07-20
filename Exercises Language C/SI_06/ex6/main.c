#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int mat[3][4], tmat[4][3];
 int i,j;

 // initialisation de la matrice
 for(i=0;i<3;i++)
   for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de mat[%d][%d]:",i,j);
			scanf("%d", &mat[i][j]);
   }

  // affichage de la matrice
	for(i=0;i<3;i++)
	 {
		for(j=0;j<4;j++)
		{
	 	  printf("%d \t",mat[i][j]);
		}
     printf("\n");
	 	 printf("\n");
	 }

  //Calcul de la transposée
  for( i=0;i<4;i++)
      for( j=0;j<3;j++)
         tmat[i][j]=mat[j][i];

  //Affichage de la transposée
  printf("Voici la matrice transposee de mat :\n");
  for(i=0;i<4;i++)
  {
		for(j=0;j<3;j++)
     printf("%5d",tmat[i][j]);
     printf("\n");
      }
  system("pause");
  return 0;
}
