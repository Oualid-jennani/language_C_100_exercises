#include <stdio.h>
#include <string.h>
 main()
{
 /* D�clarations */
 char CH[101]; /* cha�ne donn�e */
 char C;   /* lettre � �liminer */
 char *P;  /* pointeur d'aide dans CH */

 /* Saisie des donn�es */
 printf("Entrez une ligne de texte (max.100 caract�res)  :\n");
 gets(CH);
 printf("Entrez le caract�re � �liminer (suivi de Enter) : ");
 C=getchar();
 /* Comprimer la cha�ne � l'aide de strcpy */
 P=CH;
 while (*P)
   {
      if (*P==C)
          strcpy(P, P+1);
      else P++;
   }

  /* Affichage du r�sultat */
 printf("Cha�ne r�sultat : \"%s\"\n", CH);
 return 0;
}
