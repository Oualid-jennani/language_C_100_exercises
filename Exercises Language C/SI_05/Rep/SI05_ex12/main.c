#include <stdio.h>
#include <stdlib.h>

int main()
{
int t[10],i,j,S;
printf("entre les nombres du tableaux:\n");
for(i=0;i<10;i++){
    scanf("%d",&t[i]);}

    for(i=0;i<9;i++){
        for(j=i;j<10;j++){
                if(t[i]>t[j]){
                 S=t[i];
                t[i]=t[j];
                t[j]=S;
        }
      }
    }




printf(" la nouveux tab :\n");
for(i=0;i<10;i++){
    printf("%d\t",t[i]);
    }


return 0;
}
