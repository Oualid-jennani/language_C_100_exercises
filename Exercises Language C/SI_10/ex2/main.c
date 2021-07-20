#include <stdio.h>
#include <stdlib.h>
struct employe {char nom[20],prenom[20]; int age;};

int main()
{struct employe A;
    printf("entre nom : ");
    scanf("%s",A.nom);
    printf("entre prenom : ");
    scanf("%s",A.prenom);
    printf("donnez votre l'age: ");
    scanf("%d",&A.age);
    printf("nom: %s | prenom: %s | age: %d",A.nom,A.prenom,A.age);

    return 0;
}
