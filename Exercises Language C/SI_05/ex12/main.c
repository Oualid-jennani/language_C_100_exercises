#include <stdio.h>
#include <stdlib.h>
int main()
{int T[10];
 int i, j, aux=0;
 printf("-------------- Trie par selection---------------\n");
 for (i=0; i<10; i++)
 {printf("Entrer la valeur de T[%d]:",i);
   scanf("%d", &T[i]);}
  for (i=0;i<9;i++)
			for (j=i+1;j<10;j++)
          if (T[i]>T[j])
          {aux=T[i];
            T[i]=T[j];
            T[j]=aux;}
 for (i=0;i<10;i++)
     printf("%d\n",T[i]);


 printf("-------------- Trie par bull---------------\n");
 for (i=0; i<10; i++)
 {printf("Entrer la valeur de T[%d]:",i);
   scanf("%d", &T[i]);}
	 for (i=0;i<9;i++)
       for ( j=9;j>=i+1;j--)
            if (T[j-1]>T[j])
            {aux=T[j-1];
              T[j-1]=T[j];
              T[j]=aux;}
 for (i=0;i<10;i++)
     printf("%d\n",T[i]);

 return 0;
}
