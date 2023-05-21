#include <stdio.h>

main(){
    int N, days, months, years, hours;
    scanf("%d\n", &N);
    years = N / 365;
    N = N % 365;
    months = N / 30;
    days = N % 30;
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;

}
