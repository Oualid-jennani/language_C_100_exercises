#include <stdio.h>
#include <stdlib.h>

int main()
{char txt[100];
int i,L;
        printf("donnez un texte\n");
        gets(txt);
        L=strlen(txt);
        for(i=0;i<L;i++){
        if(txt[i]<=90&&txt[i]>=65)
        txt[i]=txt[i]+32;
        else
        txt[i]=txt[i]-32;
        }
        printf("%s",txt);
        return 0;
}
