#include <stdio.h>
#include <stdlib.h>

int main()
{char nom[20];
int taille,i,k;
    printf("entre votre nom:");
    gets(nom);
    printf("bonjeur %s\n",nom);
    taille=strlen(nom);
    k=taille;
    for(i=0;i<=taille-1;i++){
        if(nom[i]==' ')
        k--;}

printf("la taille est : %d",k);
    return 0;
}
