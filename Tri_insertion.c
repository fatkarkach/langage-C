#include <stdio.h>

#include <stdlib.h>
int main()
{
      int n;
      int i=0;
      int t[100];
      int j;

  //la longeur de tableau
    do{
        printf("Donner la taille du tableau \n");
        scanf("%d",&n);
   }while(n<=0);
    printf("Donner les element de tableau\n");

    for(i=0;i<n;i++)
    {
        printf("Donner t[%d] \t",i);
        scanf("%d",&t[i]);
    }
    
    printf("les element de tableau avant trier  \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }
    //trier le tableau par insertion
    int x;
     for(i=0;i< n ; i++)
     {
             x = t[i];
             j = i;
             while( j> 0 && t[j-1] > x )
             {
                    t[j] = t[j-1];
                    j = j - 1;       
             }
             t[j] = x;
     }
         printf(" \n");
   printf("les element de tableau apres  trier \n");
   for(i=0;i<n;i++)
   {
       printf("%d \t",t[i]);
   }
    return 0;
}