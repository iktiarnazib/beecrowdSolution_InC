#include <stdio.h>

main()
{
    int a,b,x;
    scanf("%d %d", &a, &b);
    if(a==b){printf("O JOGO DUROU 24 HORA(S)\n");}
    else if(b>a){printf("O JOGO DUROU %d HORA(S)\n", (b-a));}
    else if(a>b){printf("O JOGO DUROU %d HORA(S)\n", (24+b)-a);}
    return 0;
}
