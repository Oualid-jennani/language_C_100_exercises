#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int i,j, compt=0;
  int mat[4][4];

	for(i=0;i<4;i++)
	 for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de mat[%d][%d]:",i,j);
			scanf("%d", &mat[i][j]);
			if(mat[i][j]==0)
			  compt++;
   }


	for(i=0;i<4;i++)
	 {
		for(j=0;j<4;j++)
		{
	 	  printf("%d \t",mat[i][j]);
		}
     printf("\n");
	 	 printf("\n");
	 }

  // affichage du nombre des zéro de la matrice
	printf("Le nombre de 0 de la matrice A est : %d\n",compt);
  system("pause");
  return 0;
}
