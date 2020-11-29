#include <stdio.h>

int main()
{
    printf("%i", mocnina(2,10));
    return 0;
}

int mocnina(int cislo, int mocnina)
{
    printf("1. cislo: %i\n", cislo);
    for(int i = 0; i < 10; i++)
    {
        cislo *= 2;
        printf("%i. cislo: %i\n", i+1, cislo);
    }
}