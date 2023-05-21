#include <stdio.h>

main(){
    int Notes[7]= {100,50,20,10,5,2,1}, amount[7], a , i ;
    scanf("%d", &a);
    printf("%d\n", a);
    for (i=0; i<7; i++){
        amount[i] = a / Notes[i];
        a = a % Notes[i];
    }
    for (i=0; i<7; i++){
        printf("%d nota(s) de R$ %d,00\n", amount[i], Notes[i]);
    }
    return 0;


}
