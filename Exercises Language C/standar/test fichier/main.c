#include <stdio.h>
#include <stdlib.h>
int main ()
{
FILE *fichier=NULL;//d�claration de fichiers
fichier = fopen("walid.txt","w");//ouverture en �criture
if (fichier == NULL) printf("Probleme d'ouverture\n");
else

printf("Pas de probleme d'ouverture\n");
fputs("Creation d'un nouveau fichier", fichier);
fclose(fichier);
printf("Fin du travail\n");

return 0;
}
