#include <stdio.h>
#include <stdlib.h>

int main()
{ int T[4][4],i,j,SOM;

 for (i=0;i<4;i++)
    for (j=0;j<4;j++)
        {
         printf("Elément[%d][%d] : ",i+1,j+1);
         scanf("%d", &T[i][j]);
        }
 printf("Tableau donné :\n");
 for (i=0;i<4;i++)
     {SOM=0;
      for (j=0;j<4;j++){
             SOM+= T[i][j];
             printf("%2d",T[i][j]);
             }
      printf("|%d\n",SOM);
     }
     printf("---------");

     printf("\n");

 for (j=0;j<4;j++)
     {SOM=0;
      for (i=0;i<4;i++){
             SOM += T[i][j];
             }
      printf("%2d",SOM);
     }
    return 0;
}
