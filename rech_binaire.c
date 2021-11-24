#include <stdio.h>
#include <stdlib.h> 
void recherche(int t[30], int n,int x)
{
    //il faut que le tableau trié
    int debut=0;
    int fin=n-1;
     int milieu;
    milieu=(debut+fin)/2;
      while (debut<=fin) 
      {
          if(t[milieu]< x)
          {
              debut=milieu+1;
          }
          else if(t[milieu]==x)
          {
                printf("la valeur %d est dans l'indice %d.\n",x, milieu);
                break;
          }
          else 
          {
            fin = milieu-1;
          }
            milieu = (debut + fin)/2;
      }
       if (debut> fin)
    printf("la valeur %d n'est pas trouve .\n", x);

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
        
