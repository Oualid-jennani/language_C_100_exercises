#include <stdio.h>
#include <stdlib.h>

int main()
{

int t[10],i,nb,S;

for(i=0;i<10;i++){
printf("Veuillez taper l'entier numero ");
 scanf("%d",&t[i]);}

do
        {
        nb=0;
        for(i=0;i<10;i++)
                if(t[i]>t[i+1])
                        {
                        S=t[i];
                        t[i]=t[i+1];
                        t[i+1]=S;
                        nb++;
                        }
        }while(nb!=0);
printf("le nouveux tab est \n ");
for(i=0;i<10;i++)
    printf("%d|",t[i]);


}
