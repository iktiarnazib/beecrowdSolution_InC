#include <stdio.h>

main(){
    int X;
    double Y, Equ;
    scanf("%d %lf", &X, &Y);
    Equ = X/Y;
    printf("%.3lf km/l\n", Equ);
    return 0;
}
