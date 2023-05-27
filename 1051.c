#include <stdio.h>

main()
{
    double x,y,f;
    scanf("%lf", &f);
    f *= 100;
    if(0<f && f<200000){
        printf("Isento\n");
    }else if(200000<f && f<=300000){
        f = (f-200000)/100;
        x = f*0.08;
        printf("R$ %.2lf\n", x);

    }else if(300000<f && f<=450000){
        f = (f-300000)/100;
        x = f*0.18;
        y =(x+(1000*0.08));
        printf("R$ %.2lf\n", y );
     }else if(f>4500){
        f = (f- 450000) / 100;
        x =  f*0.28;
        y =  (x+(1000*0.08)+(1500*.18));
        printf("R$ %.2lf\n", y);
     } return 0;
}
