#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 float a, b, mArith, mGeo;

 printf("Entrez les valeurs de a et b : ");
 scanf("%f %f", &a, &b);
 mArith = (a + b) / 2;
 mGeo = sqrt(a * b);
 printf("la diff�rence entre la moyenne arithm�tique et g�m�trique  : %f\n", mArith-mGeo);

 return 0;
}

