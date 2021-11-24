/*le tableau est divisé en blocs sqrt(Dimension of the array). Il recherche l'élément dans un bloc
et, si l'élément n'est pas présent, passe au bloc suivant. Lorsque l'algorithme trouve
le bloc contenant l'élément, il utilise l'algorithme de recherche linéaire pour trouver l'exact*/
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int recherche(int t[30], int n,int x)
{
    int i = 0;
    int j = sqrt(n);
    int k;
      while(t[j] <= x && j<n)
      {
            i = j;  
            j += sqrt(n);
      }
      for(k = i; k<j; k++)
       { 
        if(t[k] == x)
         printf("la valeur se trouve %d est dans l'indice %d",x,k);
       }
       return 0;

}
int main()
{
    int t[30];
    int n;
    int x;
    int i;

    do{
        printf("Donner la taille du tableau \n");
        scanf("%d",&n);
    }while(n<=0);
    printf("entrez les element de tableaux\n");
    for(i=0;i<n;i++)
    {
        printf("entrez l'element t[%d] ",i);
        scanf("%d",&t[i]);
    }
      printf("afficher les element de tableaux\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",t[i]);
    }
    printf("\n");
    printf("Donner la valeur rechercher\n");
        scanf("%d",&x);
        printf("rechercher  la valeur %d dans le tableau \n",x);
      
            recherche(t,n,x);
        
        return 0;

}