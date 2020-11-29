#include <stdio.h>

void vypisCislaDelPeti(int start, int end)
{
    for(start; start<=end; start++)
    {
        if(start % 5 == 0)
        {
            if (start == end)
            {
                printf("%i", start);
            }
            else
            {
                printf("%i - ", start);
            }
        }
    }
}

int main()
{
    vypisCislaDelPeti(1,50);
    return 0;
}