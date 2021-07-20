
#include <stdlib.h>
int main()
{
 int N,t[100],i,j ,nb;

 do
 {
  printf("Entrer un nombre entier :\n");
  scanf("%d", &N);
  if(N<0)
   printf("Veuillez saisir un nombre positif\n");
 }
 while(N<0 || N>100);

 for(i=0;i<N-1;i++)
   t[i]=i+2;

 for(i=0;i<N-1;i++)
   for(j=i+1;j<N-1;j++)
    if(t[i]!=0)
      if(t[j]%t[i]==0)
        t[j]=0;

  printf("Les nombres premiers compris entre 2 et%d sont :\n",N);
  for(i=0;i<N-1;i++)
   if(t[i]!=0)
    printf("%d\n",t[i]);

 return 0;
}
