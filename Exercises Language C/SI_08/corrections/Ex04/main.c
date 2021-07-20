#include <stdio.h>
#include <string.h>
 main()
{
 /* Déclarations */
 char CH[101]; /* chaîne donnée */
 char C;   /* lettre à éliminer */
 char *P;  /* pointeur d'aide dans CH */

 /* Saisie des données */
 printf("Entrez une ligne de texte (max.100 caractères)  :\n");
 gets(CH);
 printf("Entrez le caractère à éliminer (suivi de Enter) : ");
 C=getchar();
 /* Comprimer la chaîne à l'aide de strcpy */
 P=CH;
 while (*P)
   {
      if (*P==C)
          strcpy(P, P+1);
      else P++;
   }

  /* Affichage du résultat */
 printf("Chaîne résultat : \"%s\"\n", CH);
 return 0;
}
