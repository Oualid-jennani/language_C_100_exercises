#include<stdio.h>
int main()
{
 int A;
 printf("Tapez la valeur de A : \n");
 scanf("%d",&A);

 if(((A%2)==0) || (A<83) || (A>101))
   printf("ERREUR\n");
 else
   printf("PAS D'ERREUR\n");

 system("pause");
 return 0;
}
