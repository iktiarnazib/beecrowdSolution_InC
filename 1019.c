#include<stdio.h>
main()
{
    int N, hour, minute, second;
    scanf("%d\n", &N);
    hour = N / 3600;
    N = N % 3600;
    minute = N / 60;
    second = N % 60;
    printf("%d:%d:%d\n", hour, minute, second);
    return 0;
}
