#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
 int t[20],j,i,var,fois;
 bool k=0;

i=0;
  do
   {
      printf("entrez un nombre entre 0 et 20 : ");
      scanf("%d",&var);

     if(var<0 || var>20){
       printf("ce nombre n'est pas compris entre 0 et 20 \n");}
        else{
           t[i]=var;
           i++;
           }
   }while(i<10);

        for(j=0;j<=20;j++){
             t[j]=j;
           for(i=0;i<10;i++){
               if(t[j]==t[i]){
               fois++;
               k=1;}
               }
               if(k==1)
              printf("Le nombre de fois du %d est %d\n",t[j],fois);
              else
              printf("Le nombre de fois du %d est %d\n",t[j],0);
              fois=0;
        }






  return 0;
}
