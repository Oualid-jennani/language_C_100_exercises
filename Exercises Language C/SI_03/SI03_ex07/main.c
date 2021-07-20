#include <stdio.h>
#include <stdlib.h>
int main()
{
  // Declare les variables
  int age = 0;
  printf("Quel est votre age :\n");

  // Lit la réponse de l'utilisateur : un entier
  scanf("%d", &age);
  if (age < 0 || age>200)
       printf("\aErreur : Vous devez entrer un nombre entier compris entre %d et %d !\n",0, 200);
  else
      if(age<18)
        printf("Vous etes mineur !\n" );
      else
       printf("Vous etes majeur !\n");
 system("pause");
 return 0;
}
