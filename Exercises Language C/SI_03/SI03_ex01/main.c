#include <stdio.h>
#include <stdlib.h>
int main()
{
  char i=7;
  int j=18;

  i=i/2; // division entiere...
  switch(i)
  {
    case 1 : printf("Premier\n");break;
    case 2 : printf("Deuxième\n");break;
    case 3 : printf("Troisième\n");break;
    default : printf("Non classe\n");
  }

  //j=j-(--j);
  j=j-j;
  j=j-1;
  switch(j)
  {
    case 1 : printf("Premier\n");break;
    case 2 : printf("Deuxième\n");break;
    case 3 : printf("Troisième\n");break;
    default : printf("Non classe\n");
  }
  system("pause");
  return 0;
}
