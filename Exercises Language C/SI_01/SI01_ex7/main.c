#include <stdio.h>
#define tva 0.20

int main()
{
	 float pht, pttc;
	 printf("Entrer le Prix HT \n");
	 scanf("%f", &pht);

	 pttc = pht * (1 + tva );
	 printf("Le prix TTC est : %f\n", pttc);

	 return 0;
}
