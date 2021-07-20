#include <stdio.h>
#include <stdlib.h>
int main ()
{
  float A,B,AUX;
  printf("Entrez les 2 valeurs A et B : ");
  scanf("%f %f",&A,&B);
  if (A>B)
  {
     AUX=B;
     B=A;
     A=AUX; // Echange de A et B
  }
  printf("La valeurs triees : %f %f\n",A,B);
  system("pause");
  return 0;
}
