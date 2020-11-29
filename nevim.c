#include <stdio.h>
#include <math.h>

int mocnina(int co, int na)
{
    int v = 1;
    if(na == 0)
    {
        v = 1;
    }
    else
    {
        for (int i = 1; i<= na; i++)
        {
            v = v * co;
        }
    } 
    return v;
}

int main()
{
    printf("%i", mocnina(5,2));
    return 0;
}