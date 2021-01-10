#include <stdio.h>

int isPrime(num){
    if(num < 2) {
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    else{
        for(int i = 2; i < num;i++){
            if(num % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

void getPrimes(end){
    for (int i = 2; i <= end;i++){
        if(isPrime(i) == 1){
            printf("%d\n", i);
        }
    }
}


int main()
{
    getPrimes(9);
    return 0;
}