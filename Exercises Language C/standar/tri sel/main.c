#include <stdio.h>
#include <stdlib.h>

int main()
{

int t[10],i,p,n=0,m,min;

for(i=0;i<10;i++){
printf("Veuillez taper l'entier numero ");
 scanf("%d",&t[i]);}

for(i=n;i<10;i++){
    min=t[9];
    p=n;
for (i=n;i<10;i){
    if (t[i]<min){
   min=t[i];
     p=i;}
   }
for(i=p;i<n+1;i--){

t[i]=t[i-1];
}
t[n]=min;


}

printf("le nouveux tab est \n ");
for(i=0;i<10;i++)
    printf("%d|",t[i]);


}
