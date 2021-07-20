#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char suj[6][6]={"je","tu","il","nous","vous","ils"},term[6][6]={"e","es","e","ons","ez","ent"},verbe[20];
int i,L;
        printf("donnez un verbe régulier du premier groupe\n");
        gets(verbe);
        L=strlen(verbe);
        if(verbe[L-2]!='e'||verbe[L-1]!='r')
        printf("(%s)n est pas un verbe de premier droupe\n",verbe);
        else{
for ( i=0; i<6; i++ )
    {
    verbe[L-2]='\0';
     strcat(verbe,term[i]);
        printf("%s %s\n",suj[i],verbe);
    }}
    return 0;
}
