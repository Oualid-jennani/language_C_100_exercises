#include <stdio.h>
#include <stdlib.h>

void CCP_TEST(int COMPTE, int CONTROLE)
{
 int D,M;
 M=COMPTE % 97;
 if (M==0)
     M=97;
 if (M==CONTROLE)
     printf ("Le nombre CCP %1d-%d\t\t correct\n",COMPTE, CONTROLE);
 else{ if(M==97)
               printf ("Le nombre CCP %ld-%d\t\t incorrect, car la valeur de controle devrait être 97.\n",COMPTE, CONTROLE);
       else
               printf ("Le nombre CCP %ld-%d\t\t incorrect\n",COMPTE, CONTROLE);
     }
}
int main()
{
  char nom_fich[100];                                             //C:\\Users\\Walid Jennani\\Desktop\\CCP.TXT
  FILE *fich;
  int COMPTE;
  int CONTROLE;
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
