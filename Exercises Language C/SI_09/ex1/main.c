#include <stdio.h>
#include <stdlib.h>

int main()
{char text[200],taille,k;
int s=0,i,E=0;
    printf("entre la txt:\n");
    gets(text);
    for(i=0;text[i];i++)
    s++;
    printf("la taille est :%d\n",s);

    for(i=0;i<s;i++){
    if(text[i]=='e'){
    E++;
    }
    }
    printf("Le nombre de 'e' est:%d\n",E);

    for(i=0;i<s-1-i;i++){
    k=text[i];
    text[i]=text[s-1-i];
    text[s-1-i]=k;
    }
    printf("%s\n",text);

    return 0;
}
