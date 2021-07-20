#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i,j,k=0;
		int mat[4][4], V[16];

	 	// initialisation de la matrice
		 for(i=0;i<4;i++)
			for(j=0;j<4;j++)
     	{
	 	   printf("Entrer la valeur de mat[%d][%d]:",i,j);
	 	   scanf("%d", &mat[i][j]);
   		 }

		 for(i=0;i<4;i++)
     for(j=0;j<4;j++)
     {
     		 V[k]=mat[i][j];
     		 k++;
   		}

    	for (i=0;i<16;i++)
    			printf("%d\n", V[i]);

    system("pause");
    return 0;
}
