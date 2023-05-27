#include <stdio.h>

main()
{
    int a,b,c,d,e,odd=0,even=0,negat=0, posit=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a>0){
        posit++;
    }if (a<0){
        negat++;
    }if (a%2==0){
        even++;
    }else{
        odd++;
    }

    if(b>0){
        posit++;
    }if (b<0){
        negat++;
    }if (b%2==0){
        even++;
    }else{
        odd++;
    }



    if(c>0){
        posit++;
    }if (c<0){
        negat++;
    }if (c%2==0){
        even++;
    }else{
        odd++;
    }


    if(d>0){
        posit++;
    }if (d<0){
        negat++;
    }if (d%2==0){
        even++;
    }else{
        odd++;
    }



    if(e>0){
        posit++;
    }if (e<0){
        negat++;
    }if (e%2==0){
        even++;
    }else{
        odd++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", posit);
    printf("%d valor(es) negativo(s)\n", negat);

}
