#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i;
  for (i=0;i<5;i++)
  {
    printf("Module EC%d\n",(i+9)/(i+1));
  }
  return 0;
}

