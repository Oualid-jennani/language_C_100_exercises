#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b;
    printf("donnez la nombre a ;");
    scanf("%f",&a);
    printf("donnez la nombre b ;");
    scanf("%f",&b);
        if(a!=0)
            {
            printf("x=%f",(-b/a));
            }
        else if (a==0 && b!=0)
        {
        printf("ps");
        }
        else if(a==0 && b==0)

          {
            printf("tout x S");
          }

            return 0;
}
