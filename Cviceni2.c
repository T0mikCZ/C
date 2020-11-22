#include <stdio.h>

int main()
{
    int cislo = 2;
    int mocnina = cislo;
    printf("1. cislo: %i\n", cislo);
    
    for(int i = 1; i <= 9; i++)
    {
        cislo *= mocnina;
        printf("%i. cislo: %i\n", i+1, cislo);
    }

    return 0;
}