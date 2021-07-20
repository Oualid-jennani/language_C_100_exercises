#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A=20,B=5,C=-10,D=2,X=12,Y=15;

  printf("%d\n",(5*X)+2*((3*B)+4));
  printf("%d\n",(5*(X+2)*3)*(B+4));
  printf("%d\n",A == (B=5));
  printf("%d\n",A += (X+5));
  A=20;
  printf("%d\n",A != (C *= (-D)));
  C=-10;
  printf("%d\n",A *= C+(X-D));
  A=20;
  printf("%d\n",A %= D++);
  A=20;
  D=2;
  printf("%d\n",A %= ++D);
  A=20;
  printf("%d\n",(X++)*(A+C));

}
