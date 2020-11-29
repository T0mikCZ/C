#include <stdio.h>

void vypisLichaCisla(int start, int end)
{
    for(start; start<=end; start++)
    {
        if(start % 2 == 1)
        {
            if(start < 10)
            {
                printf(" %i\n", start);
            }
            else
            {
                printf("%i\n", start);
            }
        }
    }
}

int main()
{
    vypisLichaCisla(1, 99);

    return 0;
}