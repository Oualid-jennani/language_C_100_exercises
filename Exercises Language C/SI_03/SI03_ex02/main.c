#include <stdio.h>
#include <stdlib.h>
int main ()
{
  float A,B,MAX;
  printf("Entrez les 2 valeurs A et B : ");
  scanf("%f %f",&A,&B);
  if (A>B)
     MAX = A;
  else
     MAX = B;
  printf("La plus grande des 2 valeurs est : %f\n",MAX);
  system("pause");
  return 0;
}
