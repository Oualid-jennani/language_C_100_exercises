#include <stdio.h>
#include <stdlib.h>
struct stagaire{int numero ; char nom[20],prenom[20]; float moy;};
int main()
{struct stagaire T[10];
int i,nb,test=0,k;
printf("donnez le nombre du stagaire (max=10)\n");
scanf("%d",&nb);
for(i=0;i<nb;i++){
    printf("---------stagaire %d---------\n",i+1);
    printf("Numero: ");
    scanf("%d",&T[i].numero);
    printf("entre nom : ");
    scanf("%s",T[i].nom);
    printf("entre prenom : ");
    scanf("%s",T[i].prenom);
    printf("moyenne: ");
    scanf("%f",&T[i].moy);}
    for(i=0;i<nb;i++)
    printf("la stagaire %d est : %s %s son numero %d et moyenne %f\n",i+1,T[i].nom,T[i].prenom,T[i].numero,T[i].moy);
printf("entre le numero du stajaire que vous cherchez:");
scanf("%d",&k);
for(i=0;i<nb;i++){
if(k==T[i].numero){
printf("la stagaire est : %s %s son moyenne %1.f\n",T[i].nom,T[i].prenom,T[i].moy);
test++;
}}
if(test==0) printf("le stagaire il n'y a pas du menu ");
    return 0;
}
