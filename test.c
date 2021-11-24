#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
   int a;
   int b;
   int s;
   int triple;
   printf("entrez  premier valeur ");
   scanf("%d",&a);
   printf("entrez  deuxieme valeur ");
   scanf("%d",&b);
   s=a+b;
   printf("lasomme est %d\n",s);
   if(a==b)
   {
   triple =3*s;
   printf("le triple est %d\n",triple);
   }
   


    return 0;
}