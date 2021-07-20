#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int N, P, i=1;
  printf("Saisir le nombre N : ");
  scanf("%d",&N);
  P=1;
  do
  {
        P=P*i;
        i++;
  } while (i<=N);
  printf("Le factoriel N est = %d\n",P);

  return 0;
}
