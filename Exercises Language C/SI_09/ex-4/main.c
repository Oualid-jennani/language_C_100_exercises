#include <stdio.h>
#include <stdlib.h>

int main()
{char CH[100];
 int i;

 printf("Entrez les mots : ");
 gets(CH);

 for (i=0; CH[i]; i++)
    {
     if (CH[i]>='A' && CH[i]<='Z')
                 CH[i] = CH[i]-'A'+'a';
     else if (CH[i]>='a' && CH[i]<='z')
                 CH[i] = CH[i]-'a'+'A';
    }
 printf("les mots convertie : %s\n", CH);

    return 0;
}
