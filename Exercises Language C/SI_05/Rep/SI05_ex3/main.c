#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10],i,max,pos;
for(i=0;i<10;i++){
 printf("donnez le N° de l'ndice %d:",i+1);
  scanf("%d",&t[i]);
 }
max=t[0];
for(i=0;i<10;i++){
 if(t[i]>=max){
 max=t[i];
 pos=i+1;}
 }
    printf("landice de nombre plus grande et : %d ",pos);

}
