#include <stdio.h>
#include <stdlib.h>
int main()
{
    //version 1
    float T[100] , *pt;
        int i,n;
    do {printf("Entrez n \n " );
    scanf(" %d" ,&n);
    }while(n<0 ||n>100);
    pt=T; //(P=&T[0])
    for(i=0;i<n;i++)
    {
     printf ("Entrez T[%d] \n ",i );
    scanf(" %f" , pt+i);
    }
    for(i=0;i<n;i++)
    {
    printf (" %f \t",*(pt+i));
    }
    printf("\n");
    printf("deuxieme methode\n");
//version 2
int tab[50];
int *pt1;
int m;
 do {printf("Entrez m \n ");
    scanf(" %d" ,&m);
    }while(m<0 ||m>100);
for(pt1=tab;pt1<tab+m;pt1++)
{ 
    printf ("Entrez tab[%d] \n ",pt1-tab);
    scanf(" %d" , pt1);
}
for(pt1=tab;pt1<tab+m;pt1++)
{
    printf (" %d \t",*pt1);
}
   return 0;
}