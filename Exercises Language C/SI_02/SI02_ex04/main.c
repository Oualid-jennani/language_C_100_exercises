#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int A=20, B=5, C=-10, D=2, X=12, Y=15, RES;

    RES = (5*X)+2*((3*B)+4);
    printf("Expression 1 est : %d \n", RES);

    RES = (5*(X+2)*3)*(B+4);
    printf("Expression 2 est : %d \n", RES);

    RES = A==(B=5);
    printf("Expression 3 est : %d \n", RES);

    RES = A+=(X+5);
    printf("Expression 4 est : %d \n", RES);
    A=20, B=5, C=-10, D=2, X=12, Y=15;
    RES = A!=(C*=(-D));

    printf("Expression 5 est : %d \n", RES);
    A=20, B=5, C=-10, D=2, X=12, Y=15;
    RES = A*=C+(X-D);
    printf("Expression 6 est : %d \n", RES);
    A=20, B=5, C=-10, D=2, X=12, Y=15;
     RES = A%=D++;

    printf("Expression 7 est : %d \n", RES);
    A=20, B=5, C=-10, D=2, X=12, Y=15;
    RES = A%=++D;
    printf("Expression 8 est : %d \n", RES);
    A=20, B=5, C=-10, D=2, X=12, Y=15;
    RES = (X++)*(A+C);
    printf("Expression 9 est : %d \n", RES);

    return 0;
}
