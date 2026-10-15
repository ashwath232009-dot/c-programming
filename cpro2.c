#include <stdio.h>
int main()
{
    int questions = 45;
    int time = 12;
    int submitted = 0;

    if (questions >= 1 && time > 0 && submitted == 0)
        printf("Submission Allowed");
    else
        printf("Submission Not Allowed");

    return 0;
}