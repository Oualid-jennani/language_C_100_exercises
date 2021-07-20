#include <stdio.h>
#include <stdlib.h>
int main()
{
 int t[10],i,indice;
 for (i=0; i<10; i++)
 {
   printf("Entrer la valeur de t[%d]:",i);
   scanf("%d", &t[i]);
 }
 indice=0;
 for(i=0;i<10;i++)
  if(t[indice]<t[i])
	  indice=i;

 printf("L'indice du plus grand element est :%d\n",indice);

 return 0;
}
