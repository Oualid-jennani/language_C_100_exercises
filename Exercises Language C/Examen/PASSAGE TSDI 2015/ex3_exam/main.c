#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct RouteN{int des ; char Vd[20];char Va[20]; char nom[20];};
int main()
{struct RouteN T[100];
char sup[15], rech[15];
int j,i=0,test=0,cas,k=0;
FILE *in;
do{
printf("****gestion des routes nationales ******* \n");
printf("taper le numero de l'operation \n");
printf("1----ajeuter un neuvele routes \n");
printf("2----afichier les  routes \n");
printf("3----chercher une  routes \n");
printf("4----suprimer les routes \n");
printf("5----sovgarder dans un fichier \n");
printf("6---- Quitter \n");
printf("***************************************** \n");

scanf("%d",&cas);
system("cls");
switch (cas) {
case 1 :
    printf("nom reute: ");
    scanf("%s",T[i].nom);
    printf("distance: ");
    scanf("%d",&T[i].des);
    printf("la ville de départ: ");
    scanf("%s",T[i].Vd);
    printf("a ville d’arrivée ");
    scanf("%s",T[i].Va);
    i++;
    system("cls");
    break;
case 2:
for (j=0;j<i;j++){
    printf("%s \n",T[j].nom);
    printf("%d \n",T[j].des);
    printf("%s \n",T[j].Vd);
    printf("%s \n",T[j].Va);
}

break;

case 3:
printf("entre le nom du reute que vous cherchez:");
scanf("%s",rech);
for(k=0;k<i;k++){
if(!strcmp(rech,T[k].nom)){
printf("\n la rute est : %s \nla ville de départ :%s \n ville d’arrivée :%s \n son distance: %d",T[k].nom,T[k].Vd,T[k].Va,T[k].des);
test++;
}}
if(test==0) printf("le reute il n'y a pas du tableaux ");


break;
case 4:
printf("entre le nom du reute que vous suprimer:");
scanf("%s",sup);
for(k=0;k<i;k++){
if(!strcmp(sup,T[k].nom)){
for (j=k;j<i;j++)

i=i-1;
T[j]=T[j+1];

test++;
}}
if(test==0) printf("le reute il n'y a pas du tableaux ");
break;
case 5:

in = fopen("C:\\Users\\Walid Jennani\\Contacts\\Desktop\\CCP.txt","w");
if (in == NULL) printf("Probleme d'ouverture\n");
else printf("Pas de probleme d'ouverture\n");
for (j=0;j<i;j++){
    fprintf(in,"%s \n",T[j].nom);
    fprintf(in,"%d \n",T[j].des);
    fprintf(in,"%s \n",T[j].Vd);
    fprintf(in,"%s \n",T[j].Va);

}
fclose(in);
break;
case 6 :
exit(-1);
}
}while(cas>=1 && cas<=6 );
    return 0;
}
