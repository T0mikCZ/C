#include <stdio.h>
#include <time.h>

int daysToHours(int days, int hours)
{
    return (days * 24) + hours;
}


int main()
{
    printf("%i\n", daysToHours(1, 0));
    return 0;
}