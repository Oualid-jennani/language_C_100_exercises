#include <stdio.h>
#include <stdlib.h>

int main()
{int t[50],VAL,POS,N,i,INF, MIL,SUP;

 printf("donnez la taille du tableaux (max.50) : ");
 scanf("%d", &N );

 for (i=0;i<N;i++)
    {
     printf("El�ment %d : ", i);
     scanf("%d", &t[i]);
    }
 printf("El�ment � rechercher : ");
 scanf("%d",&VAL );

 printf("Tableau donn� : \n");
 for (i=0; i<N; i++)
    printf("%d ", t[i]);
 printf("\n");
 INF=0;
 SUP=N-1;
 POS=-1;
 while ((INF<=SUP) && (POS==-1))
        {
         MIL=(SUP+INF)/2;
         if (VAL==t[MIL])
               POS=MIL;
         else if(VAL > t[MIL])
               INF=MIL+1;
         else
               SUP=MIL-1;
        }
 if (POS==-1)
     printf("La valeur recherch�e ne se trouve pas dans le tableau.\n");
 else
     printf("La valeur %d se trouve � la position %d. \n",VAL,POS);
 return 0;
}
