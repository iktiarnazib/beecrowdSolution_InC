#include <stdio.h>

main()
{
    double a,b,c,x ;
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a+b)>c && (b+c)>a && (c+a)>b){
        x = a + b + c;
        printf("Perimetro = %.1lf\n", x);
    } else {
        x = ((a + b)/2) * c;
        printf("Area = %.1lf\n", x);

    }
    return 0;


}
