#include <stdio.h>
#include <time.h>

void hoursToDays(int hours)
{
    if(hours > 24){
        if(hours % 24 == 0){
            printf("Dny: %i, Hodiny: %i", hours / 24, 0);
        }
        else{
            printf("Dny: %i, Hodiny: %i", hours / 24, hours % 24);
        }
    }
    else if(hours <= 24){
        printf("Dny: %i, Hodiny: %i", 0, hours);
    }

}

int main()
{
    hoursToDays(48);
    return 0;
}