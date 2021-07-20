#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int fonction(int a,int b){
   int s=0;
printf("%d*%d",a,b);
do{
    if(b%2==0){
        if(s==0)printf("\t= %d * %d \n",a*2,b/2);
          else
                printf("\t= %d * %d + %d\n",a*2,b/2,s);
    b=b/2;
    a=a*2;
    }
    else{
    printf("\t= %d * %d + %d\n",a,b-1,a+s);
    b=b-1;
    s=a+s;}
}while(b!=0);
printf("\t= %d",s);
}
int main()
{int a,b,s;
bool test=1;
while(test){
printf("donez un nombre a:");
scanf("%d",&a);
printf("donez un nombre b:");
scanf("%d",&b);
if(a<0||b<=0)
printf("non donnez deux nombres bositifs\n");
else
test=0;
}
fonction(a,b);
    return 0;
}
