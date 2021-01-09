#include <stdio.h>

int main()
{
    int cislo = 9;
    int jePrvocislo = 1;

    if(cislo < 2)
    {
        jePrvocislo = 0;
    }
    else if (cislo == 2)
    {
        jePrvocislo = 1;
    }
    else
    {
        for(int i = 2; i < cislo; i++)
        {
            if(cislo % i == 0){
                jePrvocislo = 0;
                break;
            }
        }
    }

    if(jePrvocislo){
        printf("%i Cislo je prvocislo", cislo);
    }
    else{
        printf("%i neni prvocislo", cislo);
    }

    return 0;
}