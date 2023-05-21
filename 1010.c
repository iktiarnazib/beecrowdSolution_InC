#include <stdio.h>

main(){
    int c1,c2,u1,u2;
    double p1,p2, TOTAL;
    scanf("%d %d %lf", &c1, &u1, &p1);
    scanf("%d %d %lf", &c2, &u2, &p2);
    TOTAL = (u1 * p1) + (u2 * p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
    return 0;
}
