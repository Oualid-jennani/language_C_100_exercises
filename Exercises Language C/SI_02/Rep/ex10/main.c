#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M , nbB1,nbB2,nbB3,nbB4,nbB5,nbB6,nbB7,nbB8;
    printf("ecrire lasomme d'argent");
    scanf("%d",&M);

    if (M >=200)
    {
        nbB1=M/200;
        M=M%200;

        printf("le nombre de B 200 dh est : %d \n ",nbB1);
    }

    if (M>=100)
       {
           nbB2=M/100;
           M=M%100;
     printf("le nombre de B 100 dh est : %d \n",nbB2);

     }


     if (M>=50)
    {
        nbB3=M/50;
        M=M%50;
        printf("le nombre de B 50 dh est : %d \n",nbB3);
        }


        if
    (M>=20)
    {


        nbB4=M/20;
        M=M%20;
        printf("le nombre de B 20 dh est : %d \n",nbB4);
        }



        if (M>=10)
     {

        nbB5=M/10;
        M=M%10;
        printf("le nombre de p 10 dh est : %d \n",nbB5);
        }


           if (M>=5)
     {


        nbB6=M/5;
        M=M%5;
        printf("le nombre de p 5 dh est : %d \n",nbB6);
        }

           if (M>=2)
     {


        nbB7=M/2;
        M=M%2;
        printf("le nombre de p 2 dh est : %d \n",nbB7);
       }


           if (M>=1)
     {
        nbB8=M/1;
        printf("le nombre de p 1 dh est : %d \n",nbB8);


     }



}

