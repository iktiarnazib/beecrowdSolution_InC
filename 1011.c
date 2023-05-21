#include <stdio.h>

main(){
    double  R, Equ;
    scanf("%lf", &R);
    Equ = (4.0/3) * 3.14159 * (R * R * R) ;
    printf("VOLUME = %.3lf\n", Equ);
    return 0;
}
