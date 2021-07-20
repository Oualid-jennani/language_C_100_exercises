#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int mat1[4][4], mat2[4][4], mat3[4][4],i,j,k, s=0;

  // initialisation de la matrice 1
	for(i=0;i<4;i++)
	 for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de mat1[%d][%d]:",i,j);
			scanf("%d", &mat1[i][j]);
   }
 // initialisation de la matrice 2
	for(i=0;i<4;i++)
	 for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de mat2[%d][%d]:",i,j);
			scanf("%d", &mat2[i][j]);
   }

  // calcul du produit des deux matrices
	for(i=0;i<4;i++)
    for( j=0;j<4;j++)
    {
      s=0;
			for(k=0;k<4;k++)
			 s=s+(mat1[i][k]*mat2[k][j]);
      mat3[i][j]=s;
     }

 // affichage de la matrice
	for(i=0;i<4;i++)
	{
	  for(j=0;j<4;j++)
		  printf("%d \t",mat3[i][j]);
	  printf("\n");
	 	printf("\n");
  }

  system("pause");
  return 0;
}
