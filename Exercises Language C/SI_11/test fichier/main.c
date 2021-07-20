#include <stdio.h>
#include <stdlib.h>
int main ()
{
FILE *in;//déclaration de fichiers
in = fopen("C:\\Users\\Walid Jennani\\Contacts\\Desktop\\test.txt","w");//ouverture en écriture
if (in == NULL) printf("Probleme d'ouverture\n");
else printf("Pas de probleme d'ouverture\n");
fputs("Ouverture en écriture d'un fichier existant, son contenu est alors perdu!", in);
fclose(in);
printf("Fin du travail\n");
system("pause");
return 0;
}
