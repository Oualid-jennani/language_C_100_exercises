#include <stdio.h>
#include <stdlib.h>
int un(int n){
 int U1=1,U2=1,Un, i;
 if(n==2)
    Un=U2;
    else
	 for (i=3;i<=n;i++)
	 {
	  Un=U1+U2;
	  U1=U2;
	  U2=Un;
	 }
	 return Un ;

}
int main()
{int i,U;
for(i=2;i<=20;i++){
U=un(i);
printf("U%d=%d\n",i,U);
}

}
