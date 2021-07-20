#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Un,n,i;
    printf("donnez un nombre");
    scanf("%d",&n);
    Un=1;
    for (i=2;i<=n;i++)
        Un=Un+(i-(i+1));
    printf("Un=%d",Un);


}
