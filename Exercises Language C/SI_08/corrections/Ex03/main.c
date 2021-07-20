#include <stdio.h>
main()
{
 /* Déclarations */
 int A[50];    /* tableau donné        */
 int N;        /* dimension du tableau */
 int AIDE;     /* pour la permutation  */
 int *P1, *P2; /* pointeurs d'aide     */
 /* Saisie des données */
 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N );
 for (P1=A; P1<A+N; P1++)
     {
      printf("Elément %d : ", P1-A);
      scanf("%d", P1);
     }
  /* Affichage du tableau */
 for (P1=A; P1<A+N; P1++)
     printf("%d ", *P1);
  printf("\n");
 /* Inverser le tableau */
 for (P1=A,P2=A+(N-1); P1<P2; P1++,P2--)
     {
      AIDE = *P1;
      *P1  = *P2;
      *P2  = AIDE;
     }
  /* Edition du résultat */
 for (P1=A; P1<A+N; P1++)
      printf("%d ", *P1);
  printf("\n");
 return 0;
}
