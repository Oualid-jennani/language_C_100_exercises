#include <stdio.h>
#include <stdlib.h>
void saisir(int t[],int n)
{
int i;
for(i=0;i<n;i++){
    printf("donnez un nombre %d :",i+1);
	scanf("%d",&t[i]);}
}
void afficher(int t[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",t[i]);
}
int main()
{int T[10] ;
    saisir(T,10);
printf("les valeurs du tableux est;\n");
    afficher(T,10);
    return 0;
}
