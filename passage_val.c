//les fonctions n'obtiennent que les valeurs de leurs paramètres et n'ont pas d'accès aux variables elles-mêmes.
#include <stdio.h>
#include <stdlib.h>
void ETOILES(int N)
{
 while (N>0) 
   {
    printf("*");
    N--;
   }
 printf("\n");
}
void TRIANGLE()
{
 int L;
 for (L=1; L<10; L++)
      ETOILES(L);
}
int main()
{
    TRIANGLE();

}