#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
int tab[5];
    printf("donnez les nombre:\n");
    for(i=0;i<5;i++)
        {
        scanf("%d",&tab[i]);
        }
    for (i=0;i<5;i++){

        if(tab[i]>=20)
        printf("%d\t",tab[i]);



        }
}
