#include <stdio.h>
#include <stdlib.h>
int main()
{
 int somme, nbbillet, nbpiece;
 printf("Entrez la Somme : ");
 scanf("%d", &somme);

 nbbillet = somme / 200;
 if (nbbillet != 0)
    printf("Nombre de billet de 200DH necessaire est :%d\n ", nbbillet);
 somme%= 200;

 nbbillet = somme / 100;
 if (nbbillet != 0)
    printf("Nombre de billet de 100DH necessaire est :%d\n ", nbbillet);
 somme %= 100;

 nbbillet = somme / 50;
 if (nbbillet != 0)
    printf("Nombre de billet de 50DH necessaire est :%d\n", nbbillet);
 somme = somme % 50;

 nbbillet = somme / 20;
 if (nbbillet != 0)
    printf("Nombre de billet de 20DH necessaire est :%d\n ", nbbillet);
 somme = somme % 20;

 nbpiece = somme / 10;
 printf("%d    %f\n",5/10,5/10);
 if (nbpiece != 0)
    printf("Nombre de piece de 10DH necessaire est :%d\n", nbpiece);
 somme = somme % 10;

  nbpiece = somme / 5;
 if (nbpiece != 0)
    printf("Nombre de piece de 5DH necessaire est :%d\n", nbpiece);
 somme = somme % 5;

 nbpiece = somme;
 if (nbpiece != 0)
    printf("Nombre de piece de 1DH necessaire est :%d\n", nbpiece);

 return 0;
}


