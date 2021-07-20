#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int N, S, i=1;
  printf("Saisir le nombre N : ");
  scanf("%d",&N);
  S=0;
  for(i=0;i<=N;i++)
    S=S+i;
  printf("La somme S = %d\n",S);

  return 0;
}
