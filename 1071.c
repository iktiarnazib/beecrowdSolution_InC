#include <stdio.h>

main()
{
    int x,y,temp,sum=0,i,n;
    scanf("%d %d", &x, &y);
    if(x>y){temp = y; y=x ; x = temp;}
    if(x%2==0){x++; n = x;}
    else n = x + 2;
    for(i=n ; i<y; i += 2){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
