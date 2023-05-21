#include <stdio.h>

main(){
    int A,B,C,D;
    scanf("%d %d %d", &A, &B, &C);
    D = (A+B+abs(A-B))/2;
    D = (C+D+abs(C-D))/2;
    printf("%d eh o maior\n", D);
    return 0;
}
