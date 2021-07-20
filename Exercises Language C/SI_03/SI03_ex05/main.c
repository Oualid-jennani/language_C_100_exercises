#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int A, B, C, tmp;
  printf("Entrez les 2 valeurs A, B et C : ");
  scanf("%d %d %d",&A,&B,&C);

  if (A>B)
  {
   tmp = A;
   A = B;
   B = tmp;
  }
  if (A>C)
  {
   tmp = A;
   A = C;
   C = tmp;
  }
 /* trier B et C */
 if (B>C)
     {
      tmp = B;
      B = C;
      C = tmp;
     }
  printf("Les valeurs triées de A, B et C sont : %d %d %d\n",A,B,C);
  system("pause");
  return 0;
}
