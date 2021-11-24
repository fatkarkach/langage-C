#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int **ptr;
    int n, m;
    int **ptr1;
    int i;
    printf("Entrez nombre de president : ");
    scanf("%d", &n);
    char pr[n*2][20];
    ptr = malloc(n* sizeof(*ptr));
    if(ptr == NULL)
    {
      printf("erreur\n");
    }

    for(i=0 ; i < n ; i++)
    {
     ptr[i] = malloc(20 * sizeof(**ptr) ); //On alloue des tableaux de 'taille2' variables.
     if(ptr[i] == NULL)
        {   
            printf("erreur\n");              

         }
    }
    for (i = 0; i <n*2; i+=2)
    {
        printf("le president : ");
        scanf("%s",pr[i]);
        printf("cin  de president :");
        scanf("%s",pr[i+1]);
    }
    system("cls");
    for (int i = 0; i < n*2; i++)
    {
        if(i%2==0)
            printf("%s\t",pr[i]);
       
    }
    printf("\n ");
    for (int i = 0; i < n*2; i++)
    {
        if(i%2==1)
            printf("%s\t",pr[i]);
    }
    printf("\n Entrez nombre lmosawitin : ");
    scanf("%d", &m);

    char cin[m][20];
     ptr1 = malloc(m* sizeof(*ptr1));
    if(ptr1 == NULL)
    {
      printf("erreur\n");
    }
    for(i=0 ; i < n ; i++)
    {
     ptr1[i] = malloc(20 * sizeof(**ptr1) ); //On alloue des tableaux de 'taille2' variables.
     if(ptr1[i] == NULL)
        {
            printf("erreur\n");
         }
    }
    for (int i = 0; i < m; i++)
    {
        printf("lE CIN d' electeur %d : ", i+1);
        scanf("%s",cin[i]);
    }
     system("cls");
    for (int i = 0; i < m; i++)
    {
        printf("%s\n",cin[i]);
    }
    printf( "etape de vote\n" );
    printf( "entrez le CIN d'electeur\n" );
    char test_cin[1][20];
    scanf("%s",test_cin[1]);
    for (int i = 0; i < m; i++)
    {
         if ( strcmp(cin[i] , test_cin[1] ) == 0) 
        {
            printf( "vous etes inscrit \n" );
        }
          else
        {
            printf( "vous n'etes pas  inscrit \n" );
            break;
        }
    }
    printf( "choisir le president \n" );
    printf( "entrez le nome de président\n" );
    char choix[20];
    scanf("%s",choix[1]);
     for (i = 0; i <n ; i++)
    {
        printf("le president : ");
        scanf("%s",pr[i]);
        if ( strcmp(pr[i], choix[1]) ==0);
        {
            
        }
    }

     



    return 0;
}