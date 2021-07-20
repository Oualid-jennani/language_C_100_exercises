#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{int t[10],i,v;
    bool s=0;
    for(i=0;i<10;i++){
    printf("entre le nombre %d :",i+1);
    scanf("%d",&t[i]);}
    printf("donnez la valeur de v :");
    scanf("%d",&v);
    for(i=0;i<10;i++){
        if(t[i]==v){
            s=1;
            }
            }
   if(s==1){
   printf("la valeur %d se trouve le tableau",v);
   }
   else
   {
    printf("la valeur %d se ne trouve pas dans le tableau",v);
   }
    return 0;
}
