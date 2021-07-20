#include <stdio.h>
#include <stdlib.h>

int main()
{
 int t[10],j,i,m,fois=0;


 for(i=0;i<10;i){
        printf("entrez les nombre entre 0 et 20:");
        scanf("%d",&t[i]);
     while(t[i]>=0 && t[i]<=20){
            i++;
          }
 }

for(i=0; i<10 ;i++)
    {fois=0;
       for(j=0 ; j<10 ;j++)
       {
          if(t[i] == t[j])
         fois++;
       }
       m=fois;
         if(fois>0){
    printf("Le nombre de fois du %d est %d\n",t[i],m);
    }

}
}
