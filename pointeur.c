#include <stdio.h>
#include <stdlib.h>
void test(int *p1, int *p2)
{
    *p1 = 10;
    *p2 = 20;
}
int *ptr()
{
    int *p1;
   int  n=10;
    p1=&n;
    printf("la valeur est %d \n",*p1);

    return(0) ;
}
int main ()
{
   // initialisation des pointeurs 
    int a =12;
    int b=14 ;
    int *p1;
     int *p2;
    p1=&a;
    p2=&b;
      test(&a, &b);
    test(p1, p2);
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", *p1, *p2);
     ptr();
     //pointeur de pointeur 
     int c = 10;
    int *p3 = &c;
    int **pp = &p3;

    printf("a = %d\n", **pp);
    return 0;

}