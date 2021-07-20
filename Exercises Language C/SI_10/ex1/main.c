#include <stdio.h>
#include <stdlib.h>

int main(){

typedef struct{
int NumModule ;
float Note;
}note;
note n;
printf("donnez N module : ");
scanf("%d",&n.NumModule);
printf("entre la note : ");
scanf("%f",&n.Note);
    printf("numero du module : %d | note :%.2f",n.NumModule,n.Note);
    return 0;
}
