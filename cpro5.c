#include <stdio.h>
int main()
{
    float mileage = 11;
    int petrol = 6;
    int distance = 67;

    if (mileage * petrol >= distance)
        printf("Can reach");
    else
        printf("Cannot reach");

    return 0;
}