#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,U1 = 4,Un = 4, i;
    printf("Entrez le rang n de Un a calculer : ");
    scanf("%d", &n);

    for (i=2 ; i<=n ; i++)
    {
        Un = U1 + 10;
        U1 = Un;
    }

    printf("le terme Un est : %d\n", Un);
    return 0;
}
