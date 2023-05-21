#include <stdio.h>

main(){
    double A, R, N;
    scanf("%lf", &R);
    N = 3.14159;
    A = N * (R * R);
    printf("A=%.4lf\n", A); //4 decimal point double
    return 0;
}
