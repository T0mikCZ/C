#include <stdio.h>
#include <time.h>

int daysToHours(int days, int hours)
{
    return (days * 24) + hours;
}

int hoursToDays(int hours)
{
    if (hours > 24)
    {
        if (hours % 24 != 0)
        {
            return hours / 24;   
        }
    }
    else if (hours = 24)
    {
        return hours / 24;
    }
    else
    {
        return hours%24;
    }

}

int main()
{
    printf("%i\n", daysToHours(1, 0));
    printf("%i", hoursToDays(24));
    return 0;
}