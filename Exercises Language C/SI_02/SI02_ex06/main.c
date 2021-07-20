#include<stdio.h>
#include<stdlib.h>
#include<math.h> //on rajoute la bibliothèque math pour la fonction pow
const float PI=3.14;
int main()
{
  float R,V;
  printf("Entrez le rayon de la sphere : ");
  scanf("%f",&R);
  V=(4.0/3.0)*PI*pow(R,3);//pow(R,3) = R*R*R
  printf("Le volume de la sphere est : %.2f\n",V);
  return 0;
}
