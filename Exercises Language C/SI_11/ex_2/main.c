#include <stdio.h>
main()
{
  int SEPA(char C);
  char NOM_FICH[100],C;
  FILE *FICHIER;
  int ABC[26],NTOT,NAUTRES,NMOTS,NPARA,I,DANS_MOT;
  do{
     printf("Nom du fichier texte : ");
     gets(NOM_FICH);
     FICHIER = fopen(NOM_FICH, "r");
      if (!FICHIER)
         printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", NOM_FICH);
         }while (!FICHIER);
  for (I=0; I<26; I++)
      ABC[I]=0;
   NTOT =0;NAUTRES =0;NMOTS =0;NPARA =0;DANS_MOT=0;
  while (!feof(FICHIER)){
      C=fgetc(FICHIER);
      if (!feof(FICHIER)){
          if (C=='\n')
             NPARA++;
          else{
              NTOT++;
              if (C>='a' && C<='z')
                 ABC[C-'a']++;
              else if (C>='A' && C<='Z')
                 ABC[C-'A']++;
              else
                 NAUTRES++;
             }
          if (SEPA(C)){
              if (DANS_MOT)
                 {
                  NMOTS++;
                  DANS_MOT=0;
                 }}
          else
             DANS_MOT=1;
         }
      }
  fclose(FICHIER);
  printf("Votre fichier contient :\n");
  printf("\t%d paragraphes\n", NPARA);
  printf("\t%d mots\n", NMOTS);
  printf("\t%d caractères\ndont\n", NTOT);
  for (I=0; I<26; I++)
       printf("\t%d fois la lettre %c\n", ABC[I], 'a'+I);
  printf("et %d autres caractères\n", NAUTRES);
  return 0;
}


int SEPA(char C)
{
 char SEP[12] = { '\n', ' ', ',', ';', '.', ':',
                 '?', '!', '(', ')', '"', '\'' };
 int I;
 for (I=0 ; C!=SEP[I] && I<12 ; I++) ;
 if (I==12)
     return 0;
 else
     return 1;
}
