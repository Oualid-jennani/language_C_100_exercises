#include <stdio.h>
#include <stdlib.h>

int main()
{int a,nb1,nb2,nb3,nb4,nb5,nb6,nb7;
    printf("ENTRER le nombre en d'argent en dirhams : ");
    scanf("%d",&a);
    printf("le nombre nécessite ");
    if (a>=200)
    {nb1=a/200;
        a=a%200;
        printf(" %d billets de 200 DH ",nb1);}
      if (a>=100)
    {nb2=a/100;
        a=a%100;
        printf("et %d billets de 100 DH ",nb2);}
             if (a>=50)
    {nb3=a/50;
        a=a%50;
        printf("et %d billets de 50 DH ",nb3);}
         if (a>=20)
    {nb4=a/20;
        a=a%20;
        printf("et %d billets de 20 DH ",nb4);}
         if (a>=10)
    {nb5=a/10;
        a=a%10;
        printf("et %d billets de 10DH ",nb5);}
         if (a>=5)
    {nb6=a/5;
        a=a%5;
        printf("et %d billets de 5 DH ",nb6);
    }
    if (a<=4)
    {
       nb7=a/2;
        a=a%2;
        if (nb7==2 && a==0)
             printf("et 2 billets de 2 DH ");
        else
            if(nb7==1 && a==1)
             printf("et 1 billets de 2 DH et 1 billets de 1 DH");
             else
                if (nb7==1 && a==0)
                printf("et 1 billets de 2 DH ");
             else
                if (nb7==0 && a==1)
                printf("et 1 billets de 1 DH ");
    }

    return 0;

}
