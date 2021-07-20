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
int F(int t1[], int t2[], int n)
{int i,nb=0;
for(i=0;i<n;i++)if(t1[i]>=0&&t1[i]<=10){t2[nb]=t1[i];nb++;}
    return nb;
}


int main()
{int n,t1[50],t2[50],nb ;
    printf("donnez taille du tableux:");
    scanf("%d",&n);
    saisir(t1,n);
nb=F(t1,t2,n);
printf("les valeurs entre 0 et 10\n");
    afficher(t2,nb);
    return 0;
}
