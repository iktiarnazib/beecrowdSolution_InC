#include <stdio.h>

main()
{
    int x,y;
    scanf("%d", &x);
    if(x<=1000){
    for(y=1; y<=x; y+=2){
    printf("%d\n", y);
    }
}
}
