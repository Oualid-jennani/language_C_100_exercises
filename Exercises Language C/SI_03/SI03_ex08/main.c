#include <stdio.h>
#include <stdlib.h>
int main()
{
  char choix;

  printf("\t\t Que voulez-vous faire ?\n");
  printf("\t q pour quitter\n");
  printf("\t s pour sauvegarder\n");
  printf("\t o pour ouvrir un nouveau fichier\n");

  scanf("%c", &choix);

  switch(choix)
  {
   case 'q': printf("au revoir\n"); break;
   case 's': printf("sauvegarde \n"); break;
   case 'o': printf("ouverture\n");break;
   default: printf("ce n'est pas un choix valable\n");
  }
  system("pause");
  return 0;
}
