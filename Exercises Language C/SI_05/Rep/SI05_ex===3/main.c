#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i,j,cpt=0;
  int T[10];

   for(i=0 ; i<10 ;i++)
   {
     do
     {
       printf("entrez un nombre entre 0 et 20 : ");
       scanf("%d",&T[i]);
     }while(T[i]<0 || T[i]>20);
   }

    for(i=0; i<10 ;i++)
    {
       for(j=0 ; j<10 ;j++)
       {
          if(T[i] == T[j])
            cpt++;
       }
         printf("Le nombre de fois du %d est %d\n",T[i],cpt);
         cpt=0;
    }
    return 0;
}
