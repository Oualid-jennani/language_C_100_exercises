#include <stdio.h>
#include <stdlib.h>
int main()
{
  char fich[] = "C:\\Users\\Walid Jennani\\Contacts\\Desktop\\INFORMATION.TXT";
  FILE *f;
  char nom[30], pnom[30];
  int matr;
  int i,n;
  f = fopen(fich, "w");
  if (!f){
  printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", fich);}
  else{
  printf("*** Création du fichier %s ***\n", fich);
  printf("Nombre d'enregistrements à créer : ");
  scanf("%d",&n);
  for (i=1; i<=n; i++){
     printf("Enregistrement No: %d \n", i);
     printf("Numéro de matricule : ");
     scanf("%d",&matr);
     printf("Nom    : ");
     scanf("%s",nom);
     printf("Prénom : ");
     scanf("%s",pnom);
     fprintf(f, "Enregistrement No: %d \n", i);
     fprintf(f, "la matricul est : %d\n", matr);
     fprintf(f, "le nom est : %s\n",nom);
     fprintf(f, "le prenom est : %s\n",pnom);}}
  fclose(f);
  f = fopen(fich, "r");
  if (!f){printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n",fich);}
else{
  for (i=1; i<=n; i++){
     fscanf(f, "la matricul est : %d\n", &matr);
     fscanf(f, "le nom est : %s\n",nom);
     fscanf(f, "le prenom est : %s\n",pnom);
     printf("Enregistrement No: %d \n", i);
     printf("Matricul: %d | Nom: %s | Prénom: %s\n", matr, nom, pnom);
  }
}

  fclose(f);
   return 0;
}
