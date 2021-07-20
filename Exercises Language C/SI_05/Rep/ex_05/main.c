#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10],i,j,f=0;
for(i=0;i<10;i++){
printf("donnez un nombre %d entre 0 et 20:\t",i+1);
scanf("%d",&t[i]);
if ((t[i]<0)||(t[i]>20)){
printf("desole le nombre pas comprie\n");
i--;
 }
}
 printf("\n");

 for(i=0;i<=20;i++){
     f=0;
 for(j=0;j<10;j++){
 if(t[j]==i)
 f++;
 }

 printf("Le nombre de fois du %d est %d\n",i,f);

}



    return 0;
}
