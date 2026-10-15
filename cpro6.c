#include <stdio.h>
int main()
{
    int A = 243, B = 136, C = 567;
    int car = 17;

    if (car % A == 0)
        printf("Car %d goes into road A", car);
    else if (car % B == 0)
        printf("Car %d goes into road B", car);
    else if (car % C == 0)
        printf("Car %d goes into road C", car);
    else
        printf("No path exists");

    return 0;
}