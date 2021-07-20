#include <stdio.h>
#include <stdlib.h>
float min(float a, float b, float c, float d)
{
 float min;
 min=a;
 if(min > b)
	min =b;
 if(min >c)
	min =c;
 if(min >d)
	min =d;

 return min;
}
float max(float a, float b, float c, float d)
{
 float max;
 max=a;
 if(max < b)
	max =b;
 if(max < c)
	max =c;
 if(max < d)
	max =d;
  return max;
}

int main ()
{
 float mn, mx;
 int a, b, c, d;
 printf("Entrer quatre entiers\n");

 scanf("%d%d%d%d",&a,&b,&c,&d);
 mn= min(a,b,c,d);
 mx = max(a,b,c,d);

 printf("la valeur minimum est : %f\n",mn);
 printf("la valeur maximum est : %f\n",mx);

 return 0;
}
