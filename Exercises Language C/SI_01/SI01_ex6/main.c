#include<stdio.h>
#include<stdlib.h>

int main()
{
	 int jour, mois, annee;

	 printf("entrer la valeur du jour \n");
	 scanf("%d",&jour);

	 printf("entrer la valeur du mois \n");
	 scanf("%d",&mois);

	 printf("entrer la valeur de l'annee \n");
	 scanf("%d",&annee);

	 printf("la date que vous avez saisie est : %d/%d/%d\n",jour, mois, annee);

	return 0;
}
