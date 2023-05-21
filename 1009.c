#include <stdio.h>

main(){
    char a[100];
    double s_fixed, s_NotFixed, Equ, Equ2;
    scanf("%s %lf %lf", &a, &s_fixed, &s_NotFixed);
    Equ = (s_NotFixed * 0.15);
    Equ2 = Equ + s_fixed ;
    printf("TOTAL = R$ %.2lf\n", Equ2);
    return 0;

}
