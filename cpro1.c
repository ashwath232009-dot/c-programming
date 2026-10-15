#include <stdio.h>
int main()
{
    float distance = 15, fare = 100;
    int member = 1;

    if (distance > 10)
        fare = fare + (distance - 10) * 20;

    if (member == 1)
        fare = fare - fare * 0.10;

    printf("Final Fare: Rs.%.0f", fare);
    return 0;
}
