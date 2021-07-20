#include <stdio.h>
#include <stdlib.h>

int main()
{char nom[20],taille,s,i;
    printf("entre votre nom:");
    gets(nom);
    printf("bonjeur %s\n",nom);
    taille=strlen(nom);

    for(i=0;i<=taille/2;i++){
    s=nom[i];
    nom[i]=nom[taille-1-i];
    nom[taille-1-i]=s;
    }
    printf("bonjeur %s\n",nom);


    return 0;
}
