#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{char mot[50];
 int taille,i;
 bool is_palandrom=1;
    printf("entrer le mot a verifier\t");
    scanf("%s",mot);
    taille=strlen(mot);
    i=0;
    for(i=0;i<=taille-1;i++){
        if(mot[i]==mot[(taille-1)-i]){
        is_palandrom=0;
        }
    }

        if(is_palandrom==0)
        printf("\n le mot est un palindrome\n");
        else

        printf("\nDesole le mot n'est pas un palindrome\n");


    return 0;
}
