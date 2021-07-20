#include <stdio.h>
#include <stdlib.h>
int main()
{
      int A = 1;
      int B = 2;
      int C = 3;
      printf("Initialisation: A: %d | B: %d | C: %d\n\n", A, B, C);
      int *P1, *P2;
      P1=&A;
      printf("P1=&A => A: %d | B: %d | C: %d | P1: %x | P2: / | *P1: %d | *P2: / \n\n", A, B, C, P1, *P1);
      P2=&C;
      printf("P2=&C => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      *P1=(*P2)++;
      printf("*P1=(*P2)++ => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      P1=P2;
      printf("P1=P2 => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      P2=&B;
      printf("P2=&B => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      *P1-=*P2;
      printf("*P1-=*P2 => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      ++*P2;
      printf("++*P2 => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      *P1*=*P2;
      printf("*P1*=*P2 => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      A=++*P2**P1;
      printf("A=++*P2**P1 => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      P1=&A;
      printf("P1=&A => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);
      *P2=*P1/=*P2;
      printf("*P2=*P1/=*P2 => A: %d | B: %d | C: %d | P1: %x | P2: %x | *P1: %d | *P2: %d \n\n", A, B, C, P1, P2, *P1, *P2);

      return 0;
}
