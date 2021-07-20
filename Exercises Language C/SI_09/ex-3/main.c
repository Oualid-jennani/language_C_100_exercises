#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char verbe[20];
int L;
        printf("donnez un verbe régulier du premier groupe\n");
        gets(verbe);
        L=strlen(verbe);
        if(verbe[L-2]!='e'||verbe[L-1]!='r')
        printf("(%s)n est pas un verbe de premier droupe\n",verbe);
        else{
           verbe[L-2]='\0';
     strcat(verbe,"e");
        printf("je %s\n",verbe);
           verbe[L-2]='\0';
     strcat(verbe,"es");
        printf("tu %s\n",verbe);
           verbe[L-2]='\0';
     strcat(verbe,"e");
        printf("il %s\n",verbe);
           verbe[L-2]='\0';
     strcat(verbe,"ons");
        printf("nous %s\n",verbe);
           verbe[L-2]='\0';
     strcat(verbe,"ez");
        printf("vous %s\n",verbe);
           verbe[L-2]='\0';
     strcat(verbe,"ent");
        printf("ils %s\n",verbe);
    }
    return 0;
}
