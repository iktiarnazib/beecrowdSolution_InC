#include <stdio.h>

main()
{
    double x,salary,y;
    int a;
    char b='%';
    scanf("%lf", &salary);
    if(salary>=0.00 && salary<=400.00)
    {
        x = (salary*0.15);
        a = 15;
        y = salary + x;

    } else if(400.00 < salary && salary <= 800.00)
    {
        x = (salary*0.12);
        a = 12;
        y = salary + x;

    } else if(800.00 < salary && salary<=1200.00)
    {
        x = (salary*0.10);
        a = 10;
        y = salary + x;

    }else if(1200.00 < salary && salary <= 2000.00)
    {
        x = (salary*0.07);
        a = 7;
        y = salary + x;
    }else
    {
        x = (salary*0.04);
        a = 4;
        y = salary + x;
    }
    printf("Novo salario: %.2lf\n", y);
    printf("Reajuste ganho: %.2lf\n", x);
    printf("Em percentual: %d %c\n", a, b);

    return 0;
}
