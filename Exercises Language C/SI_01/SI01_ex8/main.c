#include <stdio.h>
#include <stdlib.h>
/*#define PI 3.14 /* PI est une constante=3,14 */
const float PI=3.14;
// on peut aussi utiliser : const float PI=3.14;

int main ()
{
   float P,R;
   printf("Entrez la valeur du rayon : ");
   scanf("%f", &R);
   P=2*PI*R;
   printf("Le perimetre du cerle est : %f\n",P);
   printf("Fin du travail\n");

   return 0;
}
