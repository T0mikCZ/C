#include <stdio.h>

void vypiseCislaZIntervalu(int start, int end)
{
    for(start; start <= end; start++)
    {
        if(start != start || start != end)
        {
            printf("%i, ", start);
        }
        else{
            printf("%i", start);
        }
    }
}

int main()
{
    vypiseCislaZIntervalu(1, 1000);
    return 0;
}