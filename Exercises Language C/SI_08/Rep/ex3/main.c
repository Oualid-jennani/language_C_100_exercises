#include<stdio.h>
#include<conio.h>
main()
{int t[10],*p1,*p2,n,s;
printf("donnez la taille tab");
scanf("%d",&n);
for(p1=t;p1<t+n;p1++)
{printf("donnez les valeurs t[%d]=",p1-t);
scanf("%d",p1);}
for(p1=t;p1<t+n;p1++)
printf("%d\t",*p1);
printf("\n");
p1=t;
p2=t+n-1;
while (p1<p2)
{s=*p1;
*p1=*p2;
*p2=s;
p1++;
p2--;}
for(p1=t;p1<t+n;p1++)
printf("%d\t",*p1);

}
