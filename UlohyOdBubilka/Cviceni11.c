#include <stdio.h>

int getReminder(num, num2){
    if (num2 == 0){
        printf("Nemuzes delit nulou");
        return -1;
    }
    
    int result = num/num2;
    int reminder = num - (result * num2);

    return reminder;

}

int main()
{
    printf("%d\n", 15%10);
    printf("%d", getReminder(15,10));
    return 0;
}