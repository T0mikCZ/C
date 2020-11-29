#include <stdio.h>
#include <math.h>

int mocnina(cislo, mocnina)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%i. cislo: %.f\n", i, pow(cislo,i));
    }
}

int main()
{
    float cislo = 2;
    for(int i = 1; i <= 10; i++)
    {
        printf("%i. cislo: %.f\n", i, pow(cislo,i));
    }

    return 0;
}
