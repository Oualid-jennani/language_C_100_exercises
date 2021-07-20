#include <stdio.h>
#include <stdlib.h>

int main()
{int i ;
float t[10],valNEG,valPOS,max,som,moy,mult;
    printf("donnez valeur des tableaux :\n");
    for(i=0;i<10;i++){
     scanf("%f",&t[i]);}

    max=t[0];
    valNEG=0;
    valPOS=0;
    som=0;
for(i=0;i<10;i++){

     if (t[i]>=max){
        max=t[i];}

     if(t[i]<0){
        valNEG++;
        }
     if(t[i]>0){
        som=som+t[i];
        valPOS++;
        }
}
  printf("la valeur max est : %.2f\n", max);
  printf(" le nombre de valeurs négatives: %.2f\n",valNEG);
  printf("la somme des valeurs positif est %.2f\n",som);
  printf("la moyenne des valeurs positif est %.2f\n",som/valPOS);
  printf("la multiplication des valeur du tableaux est \n\n");
   for(i=0;i<10;i++){
    mult=t[i]*5;
    printf("%.2f|",mult);
    }

  printf("\n");

    return 0;
}
