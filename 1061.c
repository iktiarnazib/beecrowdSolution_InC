#include <stdio.h>

main()
{
    int N,d1,d2,h1,h2,m1,m2,s1,s2,dt1,dt2,dtot,day,hr,min,sec;
    scanf("%*s %d", &d1); //%*s doesnt store value
    scanf("%d", &h1); //%*s doesnt store value
    scanf("%*s %d", &m1); //%*s doesnt store value
    scanf("%*s %d", &s1); //%*s doesnt store value
    scanf("%*s %d", &d2); //%*s doesnt store value
    scanf("%d", &h2); //%*s doesnt store value
    scanf("%*s %d", &m2); //%*s doesnt store value
    scanf("%*s %d", &s2); //%*s doesnt store value


    dt1 = s1 + (m1*60) + (h1*3600) + (d1*86400);
    dt2 = s2 + (m2*60) + (h2*3600) + (d2*86400);
    N = dt2 - dt1;
    day = N / 86400; //DAY
    N = N % 86400;
    hr = N / 3600;  //HOUR
    N = N % 3600;
    min = N / 60;    //MINUTE
    sec = N % 60;




    printf("%d dia(s)\n", day );
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);
    return 0;


}
