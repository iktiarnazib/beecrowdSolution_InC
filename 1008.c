#include <stdio.h>

main(){
    int num, w_hour;
    double salary, equ;
    scanf("%d %d %lf", &num, &w_hour, &salary);
    equ = w_hour * salary ;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", equ);
    return 0;
}
