#include <stdio.h>
#include <stdlib.h> 
int  somme(int t[30][30], int n,int m)
{
  int i;
  int j;
  int s=0;
   for(i = 0; i<n; i++)
    {
      for(j=0; j<m; j++)
      {
             s += t[i][j];

      }
    }

    printf("Somme est  %d  \n",s);
    return 0;
}
int main()
{
    int i;
    int j;
    int n;
    int m;
    int t[30][30];
    do{
        printf("Donner la taille du ligne  \n");
        scanf("%d",&n);
    }while(n<=0);
    
    do{
        printf("Donner la taille du colonne\n");
        scanf("%d",&m);
    }while(m<=0);
    printf("entrez les elements de tableaux \n");
    for(i = 0; i<n; i++)
    {
    for(j=0; j<m; j++)
    {
        printf("entrez l'element t[%d]t[%d] = ",i,j);
      scanf("%d",&t[i][j]);
    }
  }
  printf(" Le tableau 2D = \n");
  for(i=0;i<n; i++)
  {
    for(j=0;j<m;j++)
    {
      printf("%2d",t[i][j]);
    }
        printf("\n");
  }
  somme( t, n, m);
    
}