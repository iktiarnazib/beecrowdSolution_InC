#include <stdio.h>

main(){
    double a, n;
    int j[12]={10000,5000,2000,1000,500,200,100,50,25,10,5,1},k[13], b, i;
    scanf("%lf", &a);
    i = a * 100 ;
    for(b=0; b<12; b++){
        k[b] = i / j[b];
        i = i % j[b];
    }
    printf("NOTAS:\n");
     for(b=0; b<6; b++){
        printf("%d nota(s) de R$ %d.00\n", k[b], (j[b] / 100)) ;
     }
     printf("MOEDAS:\n");
     n = 100;
     for(b=6; b<12; b++){
        printf("%d moeda(s) de R$ %.2lf\n", k[b], (j[b] / 100.0));
     }
     return 0;
}
