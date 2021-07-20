#include <stdio.h>
#include <stdlib.h>
int main()
{
  char NOM_FICH[] = "C:\\Users\\Walid Jennani\\Desktop\\texte.txt";
  FILE *FICHIER;
  char NOM[30], PRENOM[30];
  int MATRICULE;
  int I,N_ENR;
  FICHIER = fopen(NOM_FICH, "w");
  if (!FICHIER){
      printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", NOM_FICH);}
      else{
  printf("*** Création du fichier %s ***\n", NOM_FICH);
  printf("Nombre d'enregistrements à créer : ");
  scanf("%d",&N_ENR);
  for (I=1; I<=N_ENR; I++){
     printf("Enregistrement No: %d \n", I);
     printf("Numéro de matricule : ");
     scanf("%d",&MATRICULE);
     printf("Nom    : ");
     scanf("%s",NOM);
     printf("Prénom : ");
     scanf("%s",PRENOM);
     fprintf(FICHIER, "%d\n%s\n%s\n", MATRICULE, NOM, PRENOM);}
  fclose(FICHIER);}
  FICHIER = fopen(NOM_FICH, "r");
  if (!FICHIER){printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", NOM_FICH);}
  else{
  printf("*** Contenu du fichier  %s ***\n", NOM_FICH);
  while (!feof(FICHIER)){
     fscanf(FICHIER, "%d\n%s\n%s\n", &MATRICULE, NOM, PRENOM);
     printf("Matricule : %d\t", MATRICULE);
     printf("Nom et prénom : %s %s\n", NOM, PRENOM);}
  fclose(FICHIER);}
   return 0;
}
