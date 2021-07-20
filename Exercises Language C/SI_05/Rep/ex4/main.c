#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{int i,t[10];
bool C=1,D=1;
for(i=0;i<10;i++){
    printf("donnez le nombre N %d :",i+1);
    scanf("%d",&t[i]);}
    for(i=0;i<9;i++){
    if(t[i]<t[i+1])
    C=0;
    if(t[i]>t[i+1])
    D=0;
    }
    if(C&&D)printf("le tableau est constant.\n");
    if(!C&&D)printf("le tableau est croissant.\n");
    if(C&&!D)printf("le tableau est decroissant.\n");
    if(!C&&!D)printf("le tableau est quelconque\n");
    return 0;
}
