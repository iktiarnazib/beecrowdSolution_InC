#include <stdio.h>

main()
{
    int i=0;
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    if(a>0)i++;
    if(b>0)i++;
    if(c>0)i++;
    if(d>0)i++;
    if(e>0)i++;
    if(f>0)i++;
    printf("%d valores positivos\n", i);
    return 0;
}
