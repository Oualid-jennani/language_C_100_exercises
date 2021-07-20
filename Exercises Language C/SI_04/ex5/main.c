#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int i,a;
  float S,M,V;
  S=0;
  i=0;
  do
  {
   printf("Entrer la valeur de a\n");
   scanf("%d",&a);
   S=S+a;
   if(a!=0)
   i++;
  }
  while(a!=0);

  M= S/i;

  printf("la somme des valeurs saisies est : %f\n",S);
  printf("la moyenne des valeurs saisies est : %f\n",M);

  system("pause");
  return 0;
}
