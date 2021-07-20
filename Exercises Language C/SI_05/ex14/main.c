#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i, length;
 char s[100];
 int isPalindrome=1;

 printf("Entrer une chaîne de caractére \n");
 scanf("%s",s);
 length = strlen(s);
 for (i=0; i<length; i++)
 {
  if (s[i] != s[length-1-i])
  isPalindrome= 0;
 }

 if(isPalindrome)
   printf("la chaine %s :est pas un palindrome \n",s);
 else
   printf("la chaine %s : n'est pas un palindrome \n", s);

 return 0;
}
