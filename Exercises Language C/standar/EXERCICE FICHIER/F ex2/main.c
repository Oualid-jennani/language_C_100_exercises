#include <stdio.h>
#include <stdlib.h>
main()
{
  char C,ANCIEN[100],NOUVEAU[100];
  printf("donnez les information du fishier ancien : ");
  gets(ANCIEN);
  FILE *copie, *coller;
  copie = fopen(ANCIEN, "r");
   if (!copie)
     {
      printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", ANCIEN);
      exit(-1);
     }
   printf("donnez les information du fishier nouveaux : ");
   gets(NOUVEAU);
       coller = fopen(NOUVEAU, "w");
   if (!coller)
     {
      printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", NOUVEAU);
      exit(-1);
     }
  while (!feof(copie))
    {
     C=fgetc(copie);
     fprintf(coller,"%c",C);
    }
 fclose(coller);
 fclose(copie);
  return 0;
}
