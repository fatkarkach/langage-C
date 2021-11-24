
#include <stdio.h>

int main()
{
     int n;
      int i=0;
      int t[100];
      int tmp;
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
    
    printf("les element de tableau sont \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }
    // trier le tableau 
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t[i]>t[j])
            {
                tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }

        }
    }
    printf(" \n");
   printf("les element de tableau apres  trier \n");
   for(i=0;i<n;i++)
   {
       printf("%d \t",t[i]);
   }
    return 0;
}
