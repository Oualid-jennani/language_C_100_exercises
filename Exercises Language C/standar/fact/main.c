#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact;
    printf("bonjour walid jennani \n donnez un nombre: ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("la factoriele de %d est:%d",n,fact);

    return 0;
}
