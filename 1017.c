#include <stdio.h>

main(){
    int hour, speed ;
    double  Equ ;
    scanf("%d %d",&hour, &speed) ;
    Equ = (hour * speed)/12.0 ;
    printf("%.3lf\n", Equ);
    return 0;

}
