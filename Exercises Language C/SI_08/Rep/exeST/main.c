#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10],*p;
for(p=t;p<t+10;p++)
scanf("%d",p);
for(p=t;p<t+10;p++)
printf("%d",*p);
}
