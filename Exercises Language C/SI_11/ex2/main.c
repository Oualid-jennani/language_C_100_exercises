#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *FICHIER;
    char NOM_FICH[100],c;
    int p=0,nbmot=0,S;
    printf("donnez nom du fichier :\n");
    gets(NOM_FICH);
  FICHIER = fopen(NOM_FICH, "r");
  if (!FICHIER)printf("ERREUR: Impossible d'ouvrirle fichier: %s.\n", NOM_FICH);
   else {
  printf("*** Contenu du fichier  %s ***\n", NOM_FICH);
  while (!feof(FICHIER)){
    c=fgetc(FICHIER);

    if(c!='\n'&&c!=' ')
    p++;
if((c>=0 && c<=47 )||(c>=48&&c<=57)||(c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127)||c==-1){
  if(S==1){
      nbmot++;
      S=0;}
    }

     else S=1;
     printf("%c",S);
    }
    printf("\n\n");
    printf("Le nombre caractères dans le fichier est : %d\nLe nombre de mots est : %d \n",p-1,nbmot);
  fclose(FICHIER);}

return 0;
}
