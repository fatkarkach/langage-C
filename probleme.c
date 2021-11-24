#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n=0,nn,po_s,pos,i,d,j,c, k, a;
char t_n[1000][30],t_p[1000][30],test_cin[1][30], t_cin[1000][30];
double t_montant[1000], flos, t_tre_montant[1000];

int  menu(){
    printf("\t\t 1 ==> Authentification");
    printf("\t\t 2 ==> Operation");
    printf("\t 3 ==> Affichage \n\n");
    printf("\t\t\t\t 4 ==> Fedilisation");
    printf("\t\t 0 ==> Quiter\n\n");
    printf("Option ===> ");
    int op;
    scanf("%d", &op);
    return op;
}

void  Autent_n(){
    printf("Entrez nombre client : ");
    scanf("%d", &nn);
    for (int i = 0; i <nn; i++)
    {
        printf(" \t\t\t======== %d ========== \n", i+1);
        printf("NOM :\t");
        scanf("%s",t_n[i]);
        printf("\n PRENOM :\t");
        scanf("%s",t_p[i]);
        printf("\n CIN :\t");
        scanf("%s",t_cin[i]);
        printf("\n Montant :\t");
        scanf("%lf",&t_montant[i]);
        system("cls");
    }
    n=n+nn;}

void  Autent_n1(){
    for (int i = n, j=0; i !=-1; i++)
    {
        if (j==0)
        {
        printf(" \t\t\t======== %d ========== \n", i+1);
        printf("NOM :\t");
        scanf("%s",t_n[i]);
        printf("\n PRENOM :\t");
        scanf("%s",t_p[i]);
        printf("\n CIN :\t");
        scanf("%s",t_cin[i]);
        printf("\n Montant :\t");
        scanf("%lf",&t_montant[i]);
        break;
        }
        system("cls");
    }
    n=n+1;
    }

void  Autent(){
    int w;
    printf("\t\t 1 ==> Pour enregistrer plus d'un client ");
    printf("\t\t 2 ==> Pour enregistrer un client ");
    printf("\nOption ===> ");
    scanf("%d", &w);
    switch (w)
    {
        case 1:
            Autent_n();
            break;
        case 2:
            Autent_n1();
            break;
        default:
            break;
    }
}

int vf(){
    int i=-1;
    printf("\n\tDonner le CIN :\t");
    scanf("%s",test_cin[0]);
    for(int j=0;j<n;j++)
    {
        if(strcmp(test_cin[0],t_cin[j])== 0)
        {
            i=j;
            return i;
        }
    }
    return i;
}

void Retrait(int pos,double flos){
    if(t_montant[pos]>=flos){
        t_montant[pos]=t_montant[pos]-flos;
        printf("nj7at l3amalya rak khrjti : %lf  wb9at lik %lf \n", flos, t_montant[pos]);
    }else{
        printf("maymknx tkhrj flos ");
    }
}

void Depot(int pos,double flos){
    if(flos!=0){
        t_montant[pos]=t_montant[pos]+flos;
        printf("nj7at l3amalya rak zti : %lf  wlat 3andk %lf \n", flos, t_montant[pos]);
    }else{
        printf("mazdti walo dyal lflos ");
    }
}

void Operation(){

        printf("choiser un operation : \n");
        printf("1 ====> Retrait  \n");
        printf("2 ====> Depot  \n");
        int ope;
        scanf("%d", &ope);
        if(ope==1){
            pos=vf();
            if(pos!=-1){
                printf("\n\tvous etes inscrit\n");
                printf("dkhl  x7AL BITI TKHRJ : ");
                scanf("%lf", &flos);
                Retrait(pos, flos);
            }else
                printf("\n\tcarte dyalk mamsajlax aslan\n");
        }else if(ope==2){
            pos=vf();
            if(pos!=-1){
                printf("\n\tvous etes inscrit\n");
                printf("dkhl  x7AL BITI tzid : ");
                scanf("%lf", &flos);
                Depot(pos, flos);
            }else
                printf("\n\tcarte dyalk mamsajlax aslan\n");
        }else
            printf("\n errorrrrrr");
}

void POAD(double T[],double T_1[],int N, int POO) {
              int i, j;
              double k;
              for(i=0;i<N;i++)
                  T_1[i]=T[i];
              for(i=0;i<N-1;i++){
                for(j=i+1;j<N;j++)
                if(POO==1){
                    if( T_1[i] > T_1[j]){
                        k = T_1[i];
                        T_1[i] = T_1[j];
                        T_1[j] = k;}
                 }else if( POO==-1){
                        if( T_1[i] < T_1[j]){
                        k = T_1[i];
                        T_1[i] = T_1[j];
                        T_1[j] = k;}}
              }
}

int inter(double t[], int n, double x)
{
    int I=0,  F=n-1;
    while ((t[I] <= t[F]) && (x <= t[F]) && (x >= t[I])) {
        int P = I + (int)(((F - I) * (x - t[I]))/ (t[F] - t[I]));
        if (t[P] == x)
            return P;
        if (t[P] < x)
            I = P + 1;
        else
            F = P - 1;
    }
    return -1;
}

void    POALCBMS(double t_montant[],double  t_tre_montant[],int n,double te_mon ){
            POAD(t_montant, t_tre_montant,n, 1);
            po_s=inter(t_tre_montant, n,  te_mon);
            int i;
            if(po_s!=-1){
                for(i=po_s+1;i<n;i++)
                    printf("%lf \t",t_tre_montant[i]);
            }else{
                for(i=0;i<n;i++){
                        if(t_tre_montant[i]> te_mon)
                        printf("%lf \t",t_tre_montant[i]);}
            }
}

void    PODLCBMS(double t_montant[],double  t_tre_montant[],int n,double te_mon ){
            POAD(t_montant, t_tre_montant,n, -1);
            po_s=inter(t_tre_montant, n,  te_mon);
            int i;
            if(po_s!=-1){
                for(i=n-1;i>po_s+1;i--)
                    printf("%lf \t",t_tre_montant[i]);
            }else{
                for(i=0;i<n;i++){
                        if(t_tre_montant[i]> te_mon)
                        printf("%lf \t",t_tre_montant[i]);}
            }
}

void    Affichage(){
    double test_mon;
    printf("\t\t 1 ==> Par Ordre Ascendant ");
    printf("\t\t\t 2 ==> Par Ordre Descendant \n\n");
    printf("\t\t 3 ==> Par Ordre Ascendant : LCBMS ");
    printf("\t\t 4 ==> Par Ordre Descendant : LCBMS \n\n");
    printf("\t\t\t\t\t\t 5 ==> Recherche par CIN \n");
    printf("Option ===> ");
    int affic;
    scanf("%d",&affic);
    switch(affic){
        case 1:
            POAD(t_montant, t_tre_montant,n, 1);
            for(i=0;i<n;i++)
                 printf("%lf \t",t_tre_montant[i]);
            break;
        case 2:
            POAD(t_montant, t_tre_montant,n, -1);
            for(i=0;i<n;i++)
                 printf("%lf \t",t_tre_montant[i]);
            break;
        case 3:
            printf("dkhal liya nombre de montant : \t ");
            scanf("%lf",&test_mon);
            POALCBMS(t_montant, t_tre_montant,n,test_mon );
            break;
        case 4:
            printf("dkhal liya nombre de montant : \t ");
            scanf("%lf",&test_mon);
            PODLCBMS(t_montant, t_tre_montant,n,test_mon );
            break;
        case 5:
            pos=vf();
            if(pos!=-1){
                printf("\n\tvous etes inscrit\n");
                printf(" \t\t\t======== INFORMATION ========== ");
                printf("\nNOM :\t%s",t_n[pos]);
                printf("\nPRENOM :\t%s",t_p[pos]);
                printf("\nCIN :\t%s",t_cin[pos]);
                printf("\nMontant :\t%lf",t_montant[pos]);
            }else
                printf("\n\tcarte dyalk mamsajlax aslan\n");
            break;
        default:
            printf("erorrs");}}

void    Fedilis(){
    POAD(t_montant, t_tre_montant,n, -1);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%lf \t",t_tre_montant[i]);
    printf("\n");
    for(i=0;i<3;i++)
    {       if (i<3){
                t_tre_montant[i]=t_tre_montant[i]*0.013;
                printf("%lf \n",t_tre_montant[i]);
                }
    }
}

void  faho(){
    do{
    a=menu();
    switch(a){
    case 1:
        Autent();
        //printf("\n dkhl x7al biti tzid \n");
        //scanf("%d",&d);
        //ajouter();
        //affichage();
        break;
    case 2:
         Operation();
        break;
    case 3:
        Affichage();
        break;
    case 4:
        Fedilis();
        break;
    default:
        printf("error  3awd  khtar xi option akhor");
    }
printf("\n\n");
}while(a!=0);}

int main()
{   faho();
    return 0;}
