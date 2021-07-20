#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,j,n;
  i=0;
  n=i++;
  printf("A : i =%d  n = %d\n", i,n);
  i=10;  n=++i;
  printf("B : i =%d  n  = %d \n",  i,  n);
  i=20;  j  =5;  n  = i++*++j;
  printf("C : i  = %d  j = %d  n  =  %d  \n", i,  j,  n);
  i=15 ;
  n=i+=3;
  printf("D  :  i  =  %d  n  =  %d\n",  i,  n);
  i=3;
  j=5;
  n=i*=--j;
  printf("E :  i  =  %d  j  =  %d  n  =  %d\n",  i, j, n);

  return 0;
}


