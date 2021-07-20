#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10][10],s,i,n,j;
printf("dnnnez la taille du tableau\n ");
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("dnnnez le nombre du case [%d;%d] ",i+1,j+1);

        scanf("%d",&t[i][j]);
        }
    }


for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf(" %3d",t[i][j]);
        }
        printf("\n");
    }
for(i=0;i<n;i++){
    s=0;

    t[i][n-1-i]=s;
        }
        printf("la neuveaux tab est \n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf(" %3d",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
