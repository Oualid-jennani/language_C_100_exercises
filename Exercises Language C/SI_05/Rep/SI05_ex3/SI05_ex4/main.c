#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{int t[10],i;
bool test=1;

    for (i=0;i<10;i++)
    {
     printf("donnez les nombres %d :",i+1);
           scanf("%d",&t[i]);}
    if(t[0]<t[9])
        {
    for (i=0;i<9;i++){
        if(t[i]>t[i+1]){
         printf("le tableau est quelconque\n");
         test=0;

        }
        }

        if(test){
        printf("le tableau est croissant.\n");}
        }
    else if(t[0]>t[9])
        {
        for(i=0;i<9;i++){
        if(t[i]<t[i+1]){
         printf("le tableau est quelconque\n");
         test=0;

        }
        }
        if(test){
         printf("le tableau est decroissant.\n");}
        }
    else if(t[0]=t[9]){
        for(i=0;i<9;i++){
        if(t[i]!=t[i+1]){
         printf("le tableau est quelconque.\n");
         test=0;

       }
       }
    if(test){
     printf("le tableau est constant.\n");}
    }


    return 0;
}
