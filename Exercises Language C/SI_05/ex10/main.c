#include <stdio.h>
int main()
{
 int T[10], TPOS[10], TNEG[10];
 int N,NPOS,NNEG,i;
 for (i=0; i<10; i++)
 {
  printf("Entrer la valeur de T[%d]:",i);
  scanf("%d", &T[i]);
  }
 printf("Tableau donné :\n");
 for (i=0; i<10; i++)
     printf("%d ", T[i]);
 printf("\n");
 NPOS=0;
 NNEG=0;
 for (i=0; i<10; i++)
      { if (T[i]>0) {
                     TPOS[NPOS]=T[i];
                     NPOS++;
                    }
        if (T[i]<0) {
                     TNEG[NNEG]=T[i];
                     NNEG++;
                    }
      }
 printf("Tableau TPOS :\n");
 for (i=0; i<NPOS; i++)
     printf("%d ", TPOS[i]);
 printf("\n");
 printf("Tableau TNEG :\n");
 for (i=0; i<NNEG; i++)
     printf("%d ", TNEG[i]);
 printf("\n");

 return 0;
}
