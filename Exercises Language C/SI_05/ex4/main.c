#include <stdio.h>
#include <stdlib.h>
int main()
{
 int t[10],i;
 int croissant=1,decroissant=1;

 for (i=0; i<10; i++)
 {
   printf("Entrer la valeur de t[%d]:",i);
   scanf("%d", &t[i]);
 }

 for(i=0;i<9;i++)
 {
  if(t[i]>t[i+1])croissant=0;
  if(t[i]<t[i+1])decroissant=0;
 }

 if(croissant && decroissant) printf("le tableau est constant\n");
 if(croissant && !decroissant) printf("le tableau est croissant\n");
 if(!croissant && decroissant) printf("le tableau est decroissant\n");
 if(!croissant && !decroissant) printf("le tableau est quelconque\n");

 return 0;
}
