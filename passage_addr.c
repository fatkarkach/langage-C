#include <stdio.h>
#include <stdlib.h> 
/* une fonction n'obtient que les valeurs de ses paramètres.
Pour changer la valeur d'une variable de la fonction appelante,
nous allons procéder comme suit:
- la fonction appelante doit fournir l'adresse de la variable et
- la fonction appelée doit déclarer le paramètre comme pointeur.
On peut alors atteindre la variable à l'aide du pointeur.*/
int permutation(int *a ,int *b)
{
    
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return 0;
}
int main()
{
    int a =3;
    int b =4;
    permutation(&a ,&b);

     printf("la valeur de a est %d\n",a);
      printf("la valeur de b est %d\n",b);
    

    return 0;
}
