#include <stdio.h>

int soucetCisel(int start, int end)
{
    int soucet = 0;
    for (start; start <= end; start++)
    {
        if(start % 5 == 0 && start % 7 == 0)
        {
            soucet += start;
        }
    }
    return soucet;
}

int main()
{
    printf("%i", soucetCisel(1, 100));
    return 0;
}