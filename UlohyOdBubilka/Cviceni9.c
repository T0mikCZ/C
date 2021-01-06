#include <stdio.h>
#include <stdbool.h>

bool podminka(int x, int y){
    return (x * 4) + 3 < (y * 5) - 1;
}

int main()
{
    printf("%d", podminka(5, 5));
    return 0;
}