#include <stdio.h>

int soucetCisel(int start, int end)
{
    int soucet = 0;
    for (start; start <= end; start++)
    {
        soucet += start;
    }
    return soucet;
}

int main()
{
    printf("%i", soucetCisel(1, 20));
    return 0;
}