#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{char mot[20];
 int taille,i;
 bool test=1;
    printf("entrer le mot a verifier\t");
    gets(mot);
    taille=strlen(mot);
    i=0;
    while((mot[i]==mot[(taille-1)-i])&&(i<=taille-1)){

                i++;
        test=0;
        }

        if(test==0)
        printf("\n le mot est un palindrome\n");
        else

        printf("\nDesole le mot n'est pas un palindrome\n");


    return 0;
}
