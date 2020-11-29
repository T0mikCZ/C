#include <stdio.h>

int soucetCisel(int start, int end)
{
    int soucet = 0;
    for (start; start <= end; start++)
    {
        if(start < 0)
        {
            soucet += (start * -1);
        }
        else
        {
            soucet += start;
        }
    }
    return soucet;
}

int main()
{
    printf("%i", soucetCisel(-128, 128));
    return 0;
}