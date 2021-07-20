#include <stdio.h>
#include <stdlib.h>

int main ()
{int i,k,j;
 int A[4][3],B[3][2],C[4][2];

for(i=0;i<4;i++){
   for(j=0;j<3;j++){
  printf("Entrez les valeurs A [%d][%d]:",i+1,j+1);
      scanf("%d",&A[i][j]);}
}
printf("\n");
for(i=0;i<3;i++){
   for(j=0;j<2;j++){
   printf("Entrez les valeurs B [%d][%d]:",i+1,j+1);
     scanf("%d",&B[i][j]);}
    }
for(i=0;i<4;i++){
      for(j=0;j<3;j++){
       printf("%3d",A[i][j]);
           }
          printf("\n");
            }
printf("\n\n");

for(i=0;i<3;i++){
    for(j=0;j<2;j++){
       printf("%3d",B[i][j]);
      }
        printf("\n");
       }


printf("la matrice neuveaux C:\n");
for(i=0;i<4;i++)
{
   for(j=0;j<2;j++)
   {
     C[i][j]=0;
     for(k=0;k<3;k++)
      {
       C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
      }
     printf("%3d",C[i][j]);
     }
    printf("\n");
}
system("pause");
return 0;
}
