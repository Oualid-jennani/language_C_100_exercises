#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Un,n,U1,U2,i;
    printf("donnez un nombre:");
    scanf("%d",&n);
    U1=1;
    U2=1;
    Un=0;
    for(i=3;i<=n;i++){
       Un=Un+(U2+U1);
       U1=U2-Un;
       U2=Un;
       }
       printf("%d",Un);


}
