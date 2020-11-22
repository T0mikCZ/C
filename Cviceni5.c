#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min = 30;
    int max = 80;

    srand(time(0));

    int randomNumber = (rand() % (max - min + 1)) + min;

    printf("%i", randomNumber);

    getchar();

    return 0;
}