#include <stdio.h>
#include <stdlib.h>

int main()
{char t[8][8];
int i,j;
for(i=0;i<8;i++){
   for(j=0;j<8;j++){
   if((i+j)%2==0){
   t[i][j]='b'; printf(" %c |",t[i][j]);}
   else {t[i][j]='n'; printf(" %c |",t[i][j]);}
   }
   printf("\n--------------------------------\n");
}
printf("donnez la position de lindice : \n");
scanf("%d""%d",&i,&j);
if((i+j)%2==0)
printf("la colon est blan ");
else printf("la colon est noir ");
    return 0;
}
