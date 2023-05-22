#include <stdio.h>

main()
{
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf",&a, &b, &c);
    d = (b*b) - (4*a*c);
    if(d<0 || a == 0){
        printf("Impossivel calcular\n");
    }else{
        e = (-b + sqrt(d)) / (a + a);
        f = (-b - sqrt(d)) / (a + a);
        printf("R1 = %.5lf\n", e);
        printf("R2 = %.5lf\n", f);
    }
    return 0;
}
