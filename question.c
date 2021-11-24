#include <stdio.h>
#include <stdlib.h>
 void affiche(int tableau[], int tailleTableau)
{
  int i;
   for (i = 0 ; i < tailleTableau ; i++)
   {
       printf("%d\n", tableau[i]);
   }
}
int somme(int t[], int n)
{
  int i;
  int s=0;
   for(i = 0; i<n; i++)
    {
    
    
             s += t[i];
      printf("Somme est  %d  \n",s);

    }

      return 0;
}
 
int main()
{
  int t[30]={12,14,15};
  int n =12;

  affiche( t, n);
  somme( t,  n);

   
 /*
    int a;
	float b;
	char lettre;
	char tab[3];
    int tableau[4];
    char ch [] = "toto";
   printf("Les element de tableau est  %s \n ",ch);
    printf(" c'est le premien element %c \n", ch[0]);
      char str [] = {'1','2','\0'};
   printf("%c \n",str[0]);   
 //nombre entier .
   printf("Veuillez rentrer le 1er nombre  ENTIER: \n");
    scanf("%d", &a);
    printf("c'est un nombre entier  \n");
     //nombre float .
    printf("Veuillez rentrer le deuxième nombre float : \n");
    scanf("%f", &b);
    printf("c'est un nombre float  \n");
    //entrez un caractere
    printf("entrez un charatère \n");

    scanf("%s", &lettre);
    printf("c'est un charactere \n");
    //tableau des caractères

    printf("entrez un tableau des charatères \n");
      scanf("%s", tab);
    printf("LES Characteres est %s \n", tab);
    // entrez et lire les element  des tableau
     printf("entrez le premier element  \n");

     scanf("%d", &tableau[0]);

    printf(" c'est le premien element %d \n", tableau[0]);
   
    int a=5;
    int p;
    p = a++;
    printf("%d",p);
     */
     return 0;
}