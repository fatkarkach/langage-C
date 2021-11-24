#include <stdio.h>
#include <stdlib.h> 
int divedeby(int n,int m)
{
    int div;

    if(m!=0)
    {
        div=n/m;
        printf("%d",div);
    }
    return div;
}
void premier()
{
     int p;
    int i;
    int test;
    printf("Donnez un entier:\n");
    scanf("%d",&p);
    if(p==0 || p==1) 
    {
         printf("%d n'est pas premier.\n",p);
    }
    else
    {
        test=1;
        for(i=2;i<p;i++)
        {
            if(p%i==0)
             {
                 test=0; 
                break; 
             }
        }
        if(test==1) 
        {
            printf("%d est premier.\n",p);
        }
        else printf("%d n'est pas premier.\n",p);
    }
 
}
int main()
{
    int n ;
    int m;
    printf("entrez le premier nombre :\n");
    scanf("%d",&n);
    printf("entrez leDEUXIEME nombre \n");
    scanf("%d",&m);
    divedeby(n,m);
    printf("\n");
     printf("verification si le nombre premier \n");

    premier();
    return 0;


}