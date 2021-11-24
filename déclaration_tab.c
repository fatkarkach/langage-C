
#include <stdio.h>

#include <stdlib.h>
int main()
{
      int n;
      int i=0;
      int t[100];

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
    
    printf("les element de tableau sont \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }
    return 0;
}
