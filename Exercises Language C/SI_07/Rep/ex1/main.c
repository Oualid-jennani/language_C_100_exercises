#include <stdio.h>
#include <stdlib.h>

float MOYENNE(int x,int y){
    float s;
    s=(x+y)/2;
    return s ;
}
int main()
{int a,b;
float m;
    printf("donnez les deux nombres\n");
    scanf("%d",&a);
    scanf("%d",&b);
    m=MOYENNE(a,b);
    printf("%f",m);
    return 0;
}
