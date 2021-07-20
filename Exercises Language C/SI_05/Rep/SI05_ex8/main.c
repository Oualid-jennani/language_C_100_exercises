#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,ps=0;
  int T[10] ;
  int M[10] ;

    printf("entrer les valeur de tableau 1:\n");
    for (i=0;i<10;i++){

        scanf("%d",&T[i]);
    }
    printf("entrer les valeur de tableau 2:\n");
    for (i=0;i<10;i++){

        scanf("%d",&M[i]);
    }
    for (i=0;i<10;i++){
            ps+=T[i]*M[i];}
 printf("les ps est = %d\n",ps);
    return 0;
}
