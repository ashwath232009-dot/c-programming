#include <stdio.h>
int main()
{
    int treasure = 729;
    int x = 65, y = 87;
    int ben, blackbeard, remaining, pirate;

    ben = treasure * x / 100;
    remaining = treasure - ben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirate = remaining / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d\n", pirate);

    return 0;
}