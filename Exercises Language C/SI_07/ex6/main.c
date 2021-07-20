#include <stdio.h>
#include <stdlib.h>
void createTab(int t[10])
{
     int i;
  //initialisation du tableau
  for (i=0;i<10;i++)
  {
      printf ("entrer le %d element du tableau t[%d]\n",i+1,i);
      scanf("%d",&t[i]);
  }
}
void AfficheTab(int t[10])
{
     int i;
  //initialisation du tableau
  for (i=0;i<10;i++)
  {
      printf ("%d",t[i]);
      printf("\t");
  }
}
// appel:
int main()
{
int t[10];
createTab(t);
AfficheTab(t);

return 0;
}
