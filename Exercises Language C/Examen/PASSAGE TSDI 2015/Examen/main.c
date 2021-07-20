#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

//===============les declaration=============
 int n,choix;

  struct  Route {char nom[20];int distance;char villeD[20];char villeA[20];};
  struct Route les_routes[max];

//=========procedure de saisie==============
void saisie_une_route(){

  printf("Saisir les information de la route :  \n\n");
  printf("Nom de la route : ");
  scanf("%s",&les_routes[n+1].nom);
  printf("Distance : ");
  scanf("%d",&les_routes[n+1].distance);
  printf("Ville départ : ");
scanf("%s",&les_routes[n+1].villeD);
  printf("Ville arrivée : ");
  scanf("%s",&les_routes[n+1].villeA);
   n=n+1;
     }
  //=========procedure d'affichage==============

 void afficher_les_routes(){
int i;
 for(i=1;i<n+1;i++)

  printf("La route  :%s Sa distance : %d & sa ville de départ : %s & sa ville d'arrivée : %s \n",les_routes[i].nom,les_routes[i].distance,les_routes[i].villeD,les_routes[i].villeA);

  }

//=========procedure de recheche==============
void rechercher_route(){
     int i;
printf("\nRechercher une route par ville départ :\n");
char villeD[20];
printf("Entrer la ville de départ : ");
scanf("%s",&villeD);

 for(i=1;i<=n;i++){

    if(strcmp(les_routes[i].villeD,villeD)==0){

  printf("----------------------------------\n");
  printf("Nom : %s\n",les_routes[i].nom);
  printf("Distance : %d\n",les_routes[i].distance);
  printf("Ville départ : %s\n",les_routes[i].villeD);
  printf("Ville Arrivée : %s\n",les_routes[i].villeA);
     }
  }
 }

 //=========procedure de suppression==============
void supprimer_route(){
char nom[20];
     int i,j,k;
     printf("Saisir le nom de la route que vous voulez supprimer : ");
     scanf("%s",&nom);

     for(i=1;i<=n;i++){

         if(strcmp(les_routes[i].nom,nom)==0){
            k=i;
            n=n-1;
            for(j=k;j<=n;j++){
            les_routes[j]=les_routes[j+1];
            }
         }
     }
}

//=========Sauvegarder dans un fichier==============
void sauvegarder()
{int i;
     char nomf[20];
     printf("Saisir le nom du fichier: ");
     scanf("%s",&nomf);
  FILE*  fichier = NULL;
    fichier = fopen(nomf,"w");
    if (fichier != NULL)
    {
          for(i=1;i<=n;i++)
                {
                        fprintf(fichier,"%s,%d,%s,%s \n",les_routes[i].nom,les_routes[i].distance,les_routes[i].villeD,les_routes[i].villeA);

                }
        fclose (fichier);
    }
    else

	printf("Impossible d'ouvrir le fichier test.txt");
      }
 //=========Quitter==============
void quitter(){
 system("cls");
 printf("\n\n        \t------------FIN-----------\n\n\n");
 printf("\n\n        \t------------MERCI-----------\n\n\n");
 }


int main ()

{
    do{

           printf("**************Gestion des routes natioanles************* \n");
           printf("      <1. Saisir une route------------------------------ \n");
           printf("      <2. Afficher la liste des routes------------------ \n");
           printf("      <3. Rechercher une route par ville départ--------- \n");
           printf("      <4. Supprimier une route-------------------------- \n");
           printf("      <5. Sauvegarder----------------------------------- \n");
           printf("      <6. Quitter--------------------------------------- \n");
           printf("                          ======                         \n  ");


  printf("Entre votre choix : ");
  scanf("%d",&choix);
  printf("\n\n");
  switch(choix){
case 1: system("cls");saisie_une_route();break;
case 2: system("cls");afficher_les_routes();break;
case 3: system("cls");rechercher_route();break;
case 4: system("cls");supprimer_route();break;
case 5: system("cls");sauvegarder();break;
case 6:quitter();system("cls");break;
default : system("cls");printf("votre choix n'est pas valide !!!\n");
        }

        }while(choix!=6);


  system("PAUSE>null");
  return 0;}
