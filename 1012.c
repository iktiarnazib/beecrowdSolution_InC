#include <stdio.h>

main(){
    double A,B,C, TRIA, CIRC, TRAP, SQUA, RECT ;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRIA = 0.5 * A * C;
    CIRC = 3.14159 * C * C;
    TRAP = ((A + B)*0.5) * C ;
    SQUA = B * B ;
    RECT = A * B ;
    printf("TRIANGULO: %.3lf\n", TRIA);
    printf("CIRCULO: %.3lf\n", CIRC);
    printf("TRAPEZIO: %.3lf\n", TRAP);
    printf("QUADRADO: %.3lf\n", SQUA);
    printf("RETANGULO: %.3lf\n", RECT);
    return 0;
}
