#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{int Ar,i,j,k;


for(i=1;i<=5;i++){
for(j=0;j<=9;j++){
for(k=0;k<=9;k++){
   Ar=(pow(i,3)+pow(j,3)+pow(k,3));
   if(Ar==(i*100 + j*10 + k))
    printf("%d\n",Ar);
}
}
}
}
