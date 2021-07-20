#include <stdio.h>
#include <stdlib.h>
int main()
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

	for(i=0;i<4;i++)
	{
	 somme =0;
	 for(j=0;j<4;j++)
	 {
	   printf("%d \t",mat[i][j]);
		 somme +=mat[i][j];
	 }
		printf("la somme des elements de la ligne %d est : %d\n",i,somme);
    printf("\n");
	 	printf("\n");
	}

	for(j=0;j<4;j++)
	{
	somme =0;
	for(i=0;i<4;i++)
	  somme += mat[i][j];
 		printf("la somme des elements de la colonne %d est : %d\n",j,somme);
	}

	system("pause");
  return 0;
}
