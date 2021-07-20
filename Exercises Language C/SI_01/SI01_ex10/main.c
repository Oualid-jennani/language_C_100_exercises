#include <stdio.h>
#include <stdlib.h>

int main ()
{
   char a ;

   puts("Entrer un caractere : \n");
   scanf("%c",&a);
   puts("le caractere que vous avez entrer est :");
   putchar(a);
   putchar('\n');
   printf("Le code ASCII du caractere %c est %d\n",a,a);

   return 0;
}
