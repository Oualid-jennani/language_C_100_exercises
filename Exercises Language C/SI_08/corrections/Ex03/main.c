#include <stdio.h>
main()
{
 /* D�clarations */
 int A[50];    /* tableau donn�        */
 int N;        /* dimension du tableau */
 int AIDE;     /* pour la permutation  */
 int *P1, *P2; /* pointeurs d'aide     */
 /* Saisie des donn�es */
 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N );
 for (P1=A; P1<A+N; P1++)
     {
      printf("El�ment %d : ", P1-A);
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
  /* Edition du r�sultat */
 for (P1=A; P1<A+N; P1++)
      printf("%d ", *P1);
  printf("\n");
 return 0;
}
