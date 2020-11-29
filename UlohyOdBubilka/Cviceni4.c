#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chessBoard(int length)
{
     for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%i", (j+i) % 2);
        }
        printf("\n");
    }
}

int main()
{
    chessBoard(100);
    return 0;
}