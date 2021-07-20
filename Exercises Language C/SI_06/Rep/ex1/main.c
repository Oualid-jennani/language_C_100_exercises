#include <stdio.h>
#include <stdlib.h>

int main()
{int t[4][4],i,j,somme=0;
for(i=0;i<4;i++){
  for(j=0;j<4;j++){
     printf("donnez un nombre de l'ndice[%d][%d]:",i+1,j+1);
     scanf("%d",&t[i][j]);
     }
     }

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
     printf("%3d",t[i][j]);
    }
    printf("\n");
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    somme=somme+t[i][j];
    }
}
printf("\nla somme est : %d",somme);

    return 0;
}
