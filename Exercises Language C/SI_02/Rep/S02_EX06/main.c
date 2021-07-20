#include <stdio.h>
#include <stdlib.h>

int main()
{
   float h,v,r,p=3.14;
   printf("bonjour MR walid \n donnez la rayon:");
   scanf("%f",&r);
   v=4*(p*pow(r,3))/3;
   printf("la volume est :%f",v);
}
