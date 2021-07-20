
#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int A[3][4], B[3][4], C[3][4];
 int i,j;

	 // initialisation de la matrice 1
	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de A[%d][%d]:",i,j);
			scanf("%d", &A[i][j]);
   }

	 // initialisation de la matrice 2
	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
   {
			printf("Entrer la valeur de B[%d][%d]:",i,j);
			scanf("%d", &B[i][j]);
   }

   // calcul de la somme des matrices
 	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
    C[i][j] = A[i][j]+B[i][j];

   // affichage de la matrice somme
	for(i=0;i<3;i++)
	 {
		for(j=0;j<4;j++)
		{
	 	  printf("%d \t",C[i][j]);
		}
     printf("\n");
	 	 printf("\n");
	 }
	system("pause");
  return 0;
}
