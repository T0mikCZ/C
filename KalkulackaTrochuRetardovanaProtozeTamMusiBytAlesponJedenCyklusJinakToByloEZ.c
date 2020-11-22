#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cislo1;
    int cislo2;
    int vysledek;
    char operator;

    printf("Napiste cislo: ");
    scanf("%i", &cislo1);
    printf("Napiste dalsi cislo: ");
    scanf("%i", &cislo2);

    printf("Napiste operator (+-*/): ");
    scanf(" %c", &operator);

    if(operator == '+')
    {
        vysledek = cislo1 + cislo2;
        printf("%i %c %i = %i", cislo1, operator, cislo2, vysledek);
    }
    else if(operator == '-')
    {
        vysledek = cislo1 - cislo2;
        printf("%i %c %i = %i", cislo1, operator, cislo2, vysledek);
    }
    else if(operator == '*')
    {
        for(int i = 0; i < cislo2; i++)
        {
            vysledek += cislo2;
        }
        printf("%i %c %i = %i", cislo1, operator, cislo2, vysledek);
    }
    else if(operator == '/')
    {
        if(cislo2 == 0)
        {
            printf("Nemuzes delit nulou!");
            getchar();
            exit(0);
        }
        vysledek = cislo1 / cislo2;
        printf("%i %c %i = %i", cislo1, operator, cislo2, vysledek);
    }
    else{
        printf("Spatny operator");
    }
    
    return 0;
}