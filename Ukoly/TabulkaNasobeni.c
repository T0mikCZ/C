#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int velikost, i, j;

    printf("Zadejte velikost: ");
    scanf("%i", &velikost);

    if(velikost >= 1000)
    {
        printf("Moc Velke cislo");
        getchar();
        exit(0);
    }
    else if(velikost < 1 )
    {
        printf("Moc male cislo");
        getchar();
        exit(0);
    }
    for(i = 1; i <= velikost; i++)
    {
        for(j = 1; j <= velikost; j++)
        {
            printf("%i, ", j*i);
        }
        printf("X%i", i);
        printf("\n");
    }

    getchar();
    return 0;
}