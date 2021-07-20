#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fonction (int x){
    float f;
f=sin(x)+log(x)+sqrt(x);
return f;
}

int main()
{int x;
int i;
float f;

    for(i=1;i<11;i++){
    f=fonction(i);
    printf("f(%d)=%f\n",i,f);
    }
    return 0;
}
