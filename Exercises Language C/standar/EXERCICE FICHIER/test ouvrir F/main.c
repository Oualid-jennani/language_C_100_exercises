#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *FICHIER;
    char NOM_FICH[100],c;
    printf("donnez nom du fichier :\n");
    gets(NOM_FICH);
  FICHIER = fopen(NOM_FICH, "r");
  if (!FICHIER)
     {
      printf("\aERREUR: Impossible d'ouvrir "
             "le fichier: %s.\n", NOM_FICH);
      exit(-1);
     }
  printf("*** Contenu du fichier  %s ***\n", NOM_FICH);
  while (!feof(FICHIER))
    {c=fgetc(FICHIER);
     printf("%c",c);
    }
  fclose(FICHIER);

return 0;
}
