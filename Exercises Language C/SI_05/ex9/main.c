#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int A[10], B[10], T[20],i;

 for (i=0; i<10; i++)
 {
  printf("Entrer la valeur de A[%d]:",i);
  scanf("%d", &A[i]);
 }

 for (i=0; i<10; i++)
 {
  printf("Entrer la valeur de B[%d]:",i);
  scanf("%d", &B[i]);
 }

 for(i=0;i<20;i++)
   if(i<10)
     T[i]=A[i];
   else T[i]=B[i-10];

 for (i=0; i<20; i++)
 {
  printf("%d|",T[i]);
 }
 return 0;
}
