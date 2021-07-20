#include<stdio.h>
#include<stdlib.h>
int main()
{

 int i,j,A[3][4];
 float N, M[3][4];

 //initialisation de la matrice 1
 for(i=0;i<3;i++)
   for(j=0;j<4;j++)
   {
	   printf("Entrer la valeur de A[%d][%d]:",i,j);
     scanf("%d", &A[i][j]);
	 }

  // lecture de l'entier
  printf("Entrer un nombre réel\n");
  scanf("%f", &N);

 //multiplication de la matrice par N
 for(i=0;i<3;i++)
   for(j=0;j<4;j++)
		 M[i][j] = N*A[i][j];

	//affichage de la matrice
	for(i=0;i<3;i++)
	{
	  for(j=0;j<4;j++)
		{
	 	  printf("%.2f \t",M[i][j]);
		}
     printf("\n");
	 	 printf("\n");
	 }

  system("pause");
  return 0;
}
