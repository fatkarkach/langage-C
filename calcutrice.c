#include <stdio.h>
#include <stdlib.h>

 
int main()
{
   //les operations arithmetique
    char op;
    double a,b;
    printf("entrer l'operande a:");
    scanf(" %lf",&a);
    printf("choisir l'operateur (+,-,*,/,%%)\n");
    scanf("%s",&op);
    printf("Donner l'operande b:");
    scanf(" %lf",&b);
    switch(op)
    {
           case'+':
            printf ("resultat = %lf\n", a+b);
            break;
        case'-':
       printf ("resultat =  %lf\n", a-b);
        break;
        
        case'*':
        printf ("resultat =  %lf\n", a*b);
        break;
        case'/':
        if(b!=0)
        {
           printf ("resultat =  %lf\n", a/b);
        }
        else
        {
        printf("Impossible la division par 0");
        break;
         }
        case'%':
        if(b!=0)
        {
          
            
              
            double l;
            l=a - (int)(a/b) * b;
           printf ("%lf", l);
        }
        else
        {
            printf("pas de  division par 0");
            break;
        }
    }
    char choix;
    scanf("%s",&choix);
    if (choix =="oui")
    {
      printf("final");
    }

    //la comparaison 
     char ol;
     double c,d;
    
    printf("entrer l'operande C:\n");
    scanf("%lf" ,&c);
    printf("choisir l'operateur ('>','<','=')\n");
    scanf("%s",&ol);
    printf("Donner l'operande d:\n");
    scanf("%lf",&d);
    switch(ol)
     {
         case '<':
         {
             if(c<d)
             printf("1\n");
             else
               printf("0\n");
            
      
        }
        case '>':
         {
             if(c>d)
             printf("1\n");
             else
               printf("0\n");
            
      
        }
         case '=':
         {
             if(c==d)
             printf("1\n");
             else
               printf("0\n");
            
      
        }
       

    }

    

 
  return 0;
}