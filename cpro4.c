#include <stdio.h>
int main()
{
    int d1 = 30, c1 = 10;
    int d2 = 140, c2 = 99;
    int total, dollars, cents;

    total = (d1 + d2) * 100 + c1 + c2;

    dollars = total / 100;
    cents = total % 100;

    printf("%d\n%d", dollars, cents);

    return 0;
}