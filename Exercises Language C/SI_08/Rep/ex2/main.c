#include <stdio.h>
int main()
{
int A = 1;
int B = 2;
int C = 3;
int *P1, *P2;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
P1=&A;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
P2=&C;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
*P1=(*P2)++;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
P1=P2;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
P2=&B;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
*P1-=*P2;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
++*P2;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
*P1*=*P2;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
A=++*P2**P1;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
P1=&A;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
printf("---------------------------------------------------------------------------\n");
*P2=*P1/=*P2;
printf("%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\n",A,B,C,P1,P2,*P1,*P2);
return 0;
}
