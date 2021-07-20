#include<stdio.h>
#include<string.h>

int main()
{
char mot [50];
int taille,i;

printf("entrer le mot a verifier\t");
gets(mot);
taille=strlen(mot);
i=0;

while((mot[i]==mot[(taille-1)-i])&&(i<taille))
{
i++;
}

if(i==taille)
{
printf("\nBien vu,cette chaine est un palindrome$$$\n");

}
else
{
printf("\nDesole cette chaine n'est pas un palindrome!!!\n");

}
printf("fin de ce programme\n");

}
