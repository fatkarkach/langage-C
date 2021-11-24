#include <stdio.h>
#include <stdlib.h>
int main()
{
    
   int reponse1;
  int reponse2;
  //int reponse3;
   int i =0;
   int j=0;
  int k=0;
  int b=0;
  //int m = 0;

  printf("bienvenue sur le QUIZ\n");
   do{
  printf( "1-Lequel de ces objets est indispensable au bon fonctionnement de l'ordinateur ?\n");
  printf("choisir votre choix:\n ");
    printf(" 1-Clavier\n ");
    printf("2-La souris \n");
     printf("3-Le processeur\n");

  scanf(" %d", &reponse1);
 
  switch(reponse1)
 
    { 
      //premier choix
        case 1:
        printf("Mauvaise reponse\n");
        i--;
        printf("vous avez perdu un point\n");
        j++;
        k++;
        break;
        //dexieme choix
        case 2: 
        printf("Mauvaise reponse\n");
          i--;
          j++;
        printf("vous avez perdu un point\n");
        k++;
        break;
        //3eme choix
        case 3: 
         printf("Bonne reponse\n");
        i+=5;
         printf("vous avez gagne 5 point\n");
        break;
        default :
        printf("vous n'avez pas repondu\n");

    }
     if(k==1 || k==2)
    {
        i--;
    }
   }while((reponse1==1||reponse1==2 ) && k<3);

    //dexieme question
    do
    {
    printf( "2-Quels composants disposent de memoire?\n");
    printf("choisir votre choix:\n ");
    printf(" 1-La carte son\n ");
    printf("2-Le disque dur\n");
     printf("3-L'alimentation\n");

    scanf(" %d", &reponse2);
    switch(reponse2)
 
    { //premier choix
        case 1:
        printf("Mauvaise reponse\n");
       i--;
       j++;
        printf("vous avez perdu un point\n");
        b++;
        break;
        //dexieme choix
        case 2: 
         printf("Bonne reponse\n");
         i+=5;
         printf("vous avez gagne 5 point\n");
        break;
        //3eme choix
        case 3: 
         printf("Mauvaise reponse\n");
         i--;
         j++;
          printf("vous avez perdu un point\n");
          b++;
 
        break;
        default :
        printf("vous n'avez pas repondu\n");
    }
      if(b==1 || b==2)
      {
        i--;
      }
    }while((reponse2==1|| reponse2==3)&& b<3);
    /*
    //3éme question 
    do
    {
    printf( "3-Qu'est-ce que le BIOS ?\n");
    printf("choisir votre choix:\n ");
    printf(" 1-C'est un jeu\n ");
    printf("2-C'est un peripherique\n");
     printf("3-C'est l'outil de configuration de la carte mere\n");
    scanf(" %d", &reponse3);

    switch(reponse3)
 
        { 
         //premier choix
        case 1:
        printf("Mauvaise reponse\n");
         i--;
         j++;
         printf("vous avez perdu un point\n");
          m++;
        break;
        //dexieme choix
        case 2: 
           printf("Mauvaise reponse\n");
           i--;
            printf("vous avez perdu un point\n");
           j++;
             m++;
        break;
        //3eme choix
        case 3: 
             printf("Bonne reponse\n");
            i+=5;
              printf("vous avez gagne  5 point\n");
        break;
        default :
        printf("vous n'avez pas repondu\n");
        }
         if(m==1 || m==2)
          {
            i--;
          }
    }while((reponse3==1 || reponse3==2) && m<3);
*/
    if (i>=0)
    {
       printf("le resultat final est %d\n",i);
    }
    else
    {
      printf("TOUS les question est fausse \n");

    }
    printf("le resultat final  des questions fausse est %d\n",j);
 
  return 0;
}