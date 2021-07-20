#include<stdio.h>
#include<stdlib.h>

int main()
{
  float TC,TF;
  printf("Entrez la temperature en degre Fahrenheit : ");
  scanf("%f",&TF);
  TC=(5.0/9.0)*(TF-32);
  printf("la temperature en degre Celsius est : %.2f\n",TC);

  return 0;
}
