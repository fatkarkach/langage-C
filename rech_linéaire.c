#include <stdio.h>
#include <stdlib.h> 
/*Il vérifie séquentiellement chaque élément de la liste jusqu'à ce qu'une correspondance soit trouvée.*/
int  recherche(int t[30], int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(t[i]==x)
        {
            printf("la valeur recherche   %d est  dans l'indice %d: \n",x,i);
        }
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