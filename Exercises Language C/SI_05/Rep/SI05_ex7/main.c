#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,t[10];
for (i=0;i<10;i++){
    printf("donnez nombre de l'undice %d :",i+1);
    scanf("%d",&t[i]);
    }
    printf("donnez la nombre de l’indice supprimer :\n ");
    scanf("%d",&j);
        for(i=j-1;i<9;i++){
            t[i]=t[i+1];
        }
        t[9]=0;
    printf("la neveaux tableux est :\n");
    for(i=0;i<10;i++){
        printf("%d|",t[i]);
        }

    return 0;
}
