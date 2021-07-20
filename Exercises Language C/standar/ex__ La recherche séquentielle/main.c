#include <stdio.h>
#include <stdlib.h>

int main()
{
 int t[50],VAL,POS,N,i;
 printf("donnez la taille du tableux (max.50) : ");
 scanf("%d",&N );
 for (i=0;i<N;i++)
    {
     printf("Elément %d : ",i);
     scanf("%d", &t[i]);
    }
 printf("Elément à rechercher : ");
 scanf("%d", &VAL );

 printf("Tableau donné : \n");
 for (i=0;i<N;i++)
     printf("%d  ",t[i]);
 printf("\n");

 POS = -1;
 for (i=0;(i<N)&&(POS==-1);i++)
       if (t[i]==VAL)
           POS=i;

 if (POS==-1)
     printf("La valeur recherchée ne se trouve pas "
            "dans le tableau.\n");
  else
     printf("La valeur %d se trouve à la position %d. \n",
 VAL, POS);
 return 0;
}
