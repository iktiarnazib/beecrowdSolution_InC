#include <stdio.h>

main()
{
    int i;
    double a,b,c,d,e,f,g,h,j;
    char z[6];
    scanf("%lf %lf %lf %lf %lf %lf", &a,&b,&c,&d,&e,&f);
    if(a>0){
        i++ ;
        j = a ;
    };
    if(b>0){
        i++ ;
        j += b ;
    };
    if(c>0){
        i++ ;
        j += c ;
    };
    if(d>0){
        i++ ;
        j += d ;
    };
    if(e>0){
        i++ ;
        j += e ;
    };
    if(f>0){
        i++ ;
        j += f ;
    };

    printf("%d valores positivos\n", i);
    printf("%.1lf\n", j/i);
    return 0;





}
