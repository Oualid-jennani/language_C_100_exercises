#include<stdio.h>
int main()
{
   int N=10, P=5, Q=10, R;
   char C='S';

   N = 5; P = 2;
   Q = N+1;
   printf ("C : N=%d P=%d Q=%d\n", N, P, Q);

   N = 5; P = 2;
   Q = N-3;
   printf ("D : N=%d P=%d Q=%d\n", N, P, Q);

   N=C;
   C=66;
   printf ("G : %c %c\n", C, N);
   printf ("H : %d %d\n", C, N);
   printf ("I : %x %x\n", C, N);

   printf("\nFin du travail\n"); /* 2 retours à la ligne! */

   return 0;
}
