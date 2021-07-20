#include <stdio.h>
#include <stdlib.h>

int main()
{int t[4][4],i,j;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("dnnnez le nombre du case [%d;%d] ",i+1,j+1);

        scanf("%d",&t[i][j]);
        }
    }


for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf(" %3d",t[i][j]);
        }
        printf("\n");
    }
for(i=0;i<4;i++){
    t[i][i]=0;
   }
        printf("la neuveaux tab est \n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf(" %3d",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
