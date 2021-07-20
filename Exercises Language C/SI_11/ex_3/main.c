#include <stdio.h>
#include <stdlib.h>
int main()
{ void CCP_TEST(long COMPTE, int CONTROLE);
  char nom_fich[100];//C:\\Users\\Walid Jennani\\Desktop\\CCP.TXT
  FILE *fich;
  long COMPTE;
  int CONTROLE;
  fich= fopen(nom_fich,"r");
   do{
     printf(" tappez Nom du fichier texte : ");
     gets(nom_fich);
     fich = fopen(nom_fich, "r");
      if (fich==NULL)
         printf("erreur: Impossible d'ouvrir le fichier: %s.\n", nom_fich);
         }while (fich==NULL);
  while (!feof(fich)){
      fscanf (fich, "%ld-%d\n", &COMPTE, &CONTROLE);
      CCP_TEST(COMPTE, CONTROLE);
     }
  fclose(fich);
   return 0;
}
void CCP_TEST(long COMPTE, int CONTROLE)
{
 int RESTE;
 RESTE = COMPTE % 97;
 if (RESTE == 0)
     RESTE = 97;
 if (RESTE == CONTROLE)
     printf ("Le nombre CCP %1d-%d\t\t correct\n",COMPTE, CONTROLE);
 else
     printf ("Le nombre CCP %ld-%d\t\t incorrect\n",COMPTE, CONTROLE);
}
