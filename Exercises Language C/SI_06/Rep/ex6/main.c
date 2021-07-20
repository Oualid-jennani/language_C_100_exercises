#include <stdio.h>
#include <stdlib.h>

int main()
{int t[3][4],a[4][3],i,k,s,j;
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("dnnnez le nombre du case [%d;%d] ",i+1,j+1);

        scanf("%d",&t[i][j]);
        }
    }


for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf(" %3d",t[i][j]);
        }
        printf("\n");
    }

        printf("la neuveaux tab est \n");
        for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            a[i][j]= t[j][i];
        }
        }
for(i=0;i<4;i++){
    for(j=0;j<3;j++){

        printf(" %3d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

