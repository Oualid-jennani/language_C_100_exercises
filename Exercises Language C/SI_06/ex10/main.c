#include<stdio.h>
#include<conio.h>

int main()
{
 int n;

 /* partie déclaration des variables */
 int matrice[10][10];
 int vecteur[100];
 int i,j,k=0,m,dim;
 int supplement; /* pour la permutation */
 int min,rgmin;

 printf("\n\n Ce programme fait trier une matrice donnée en décroissance");
 puts(" **** **** ");
 puts(" **** ");
 printf("\nIntroduire le nombre de lignes de la matrice :");
 scanf("%d",&m);
 puts("\nIntroduire le nombre de colonnes:");
 scanf("%d",&n);
 dim=n*m; /*dim est la dimension du vecteur émanant de la matrice */

 /* ici on va saisir la matrice, en meme temps on remplit le vecteur */
 puts("\nSaisissez les éléments de la matrice :\n");
 for (i=0; i<m; i++)
 for (j=0; j<n; j++)
 {
  printf("Elément [%d][%d] : ",i,j);
  scanf("%d", &matrice[i][j]);
  supplement=matrice[i][j];
  vecteur[k]=supplement; //remplissage du vecteur en meme temps que la
  // saisie de la matrice pour économiser les instructions */
  k++;
 }
 puts("Voici la matrice que vous avez tapé:");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%3d",matrice[i][j]);
  printf("\n");
  }
 for(i=0;i<dim;i++)
 {
  min=vecteur[i];
  rgmin=i;
  for(j=i+1;j<dim;j++)
  {
   if(min>vecteur[j])
   {
    min=vecteur[j];
    rgmin=j;
   }
  }
  vecteur[rgmin]=vecteur[i];
  vecteur[i]=min;
 }

printf("\n");
k=0;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
 matrice[i][j]=vecteur[k];
 k++ ;}
 puts("\n\nVoici la matrice triée:");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%3d",matrice[i][j]);
  printf("\n");
 }

 system("pause");
 return 0;
}
