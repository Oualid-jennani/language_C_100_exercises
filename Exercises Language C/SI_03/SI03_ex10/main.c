#include<stdio.h>
#include<stdlib.h>
int main()
{
 double XA,YA,XB,YB,XC,YC,XD,YD,XI,YI;
 double DX1,DY1,R1,DX2,DY2,R2,K;


 printf("Tapez l'abscisse de A : \n");
 scanf("%d",&XA);
 printf("Tapez l'ordonnée de A : \n");
 scanf("%d",&YA);

 printf("Tapez l'abscisse de B : \n");
 scanf("%d",&XB);
 printf("Tapez l'ordonnée de B : \n");
 scanf("%d",&YB);

 printf("Tapez l'abscisse de C : \n");
 scanf("%d",&XC);
 printf("Tapez l'ordonnée de C : \n");
 scanf("%d",&YC);

 printf("Tapez l'abscisse de D : \n");
 scanf("%d",&XD);
 printf("Tapez l'ordonnée de D : \n");
 scanf("%d",&YD);

 DX1=XB-XA;
 DY1=YB-YA;
 DX2=XD-XC;
 DY2=YD-YC;

 if(DX1==0 && DY1==0)
   printf("A et B sont confondus\n");
 if(DX2==0 && DY2==0)
   printf("C et D sont confondus\n");
 else
 {
  K=DX1*DY2-DX2*DY1;
  if(K==0)
  {
   if(DX1*(YC-YA)==DY1*(XC-XA))
     printf("AB et CD sont confondues.\n");
     else
      printf("AB et CD sont parallèles.\n");
  }
  else
  {
   printf("Les droites sont sécantes.\n");
   R1=YA*XB-XA*YB;
   R2=YC*XD-XC*YD;
   XI=(R1*DX2-R2*DX1)/K;
   YI=(R1*DY2-R2*DY1)/K;
   printf("L'abscisse de l'intersection est : %d\n",XI);
   printf("L'ordonnée de l'intersection est : %d\n",YI);
  }
 }

 system("pause");
 return 0;
}
