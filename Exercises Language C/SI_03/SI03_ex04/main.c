#include <stdio.h>
#include <stdlib.h>
int main ()
{
  float A, B, C, MAX;
  printf("Entrez les 2 valeurs A, B et C : ");
  scanf("%f %f %f",&A,&B,&C);


  if ((A>B)&&(A>C))
     MAX =A;
  else if ((A<B)&&(B>C))
     MAX =B;
  else
     MAX =C;
  printf("La plus grande des 3 valeurs est : %.2f\n",MAX);
  system("pause");
  return 0;
}
