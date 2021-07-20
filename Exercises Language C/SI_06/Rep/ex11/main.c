#include <stdio.h>
#include <stdlib.h>

int main()
{int t[4][4],i,j,minCOL,min,pos;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    printf("donnez la valeur de l'indice [%d][%d]:",i+1,j+1);
    scanf("%d",&t[i][j]);}}
min=t[0][0];
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    if(t[i][j]<=min){
    min=t[i][j];
    pos=j;}
    printf("\t%d",t[i][j]);
    }
    printf("\n");
}
printf("------------------------------------------\n");

for(j=0;j<4;j++){
    minCOL=t[0][j];
    for(i=0;i<4;i++){
        if(t[i][j]<=minCOL)
        minCOL=t[i][j];
        }
        printf("\t%d",minCOL);
}printf("\n------------------------------------------\n");
for(i=0;i<=pos;i++)
printf("\t");
printf("X");
printf("\n------------------------------------------");
    return 0;
}
