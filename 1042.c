#include <stdio.h>

main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
            if (b>c){
                printf("%d\n", c);
                printf("%d\n", b);
                printf("%d\n\n", a);
            }else {
                printf("%d\n", b);
                printf("%d\n", c);
                printf("%d\n\n", a);
            }
        }else if(b>a && b>c){

        if(a>c){
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n\n", b);
        }else{
                printf("%d\n", a);
                printf("%d\n", c);
                printf("%d\n\n", b);
            }
        }else if(c>a && c>b){

            if(a>b){
            printf("%d\n", b);
            printf("%d\n", a);
            printf("%d\n\n", c);
        }else {
                printf("%d\n", a);
                printf("%d\n", b);
                printf("%d\n\n", c);
            }

    }
    printf("%d\n%d\n%d\n", a,b,c);
    return 0;

}
