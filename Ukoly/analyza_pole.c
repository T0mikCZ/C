#include <stdio.h>
#define RAN_TRESHOLD 10 // Jak velke mohou byt random cisla.

int main()
{

    int randArray[2];

    int count = sizeof(randArray) / sizeof(randArray[0]); // velikost pole

    generuj(randArray, count);
    vypis(randArray, count);
    analyzuj(randArray, count);

    return 0;
}

// ---Hlavni 3 funkce---

int generuj(int array[], int count){

    for(int i = 0; i < count; i++){
        array[i] = rand() % RAN_TRESHOLD;
    }

    return array;
}

void vypis(int array[], int count){

    for(int i = 0; i < count;i++){
        printf("%i ", array[i]);
    }
}

void analyzuj(int array[], int count){

    printf("\nmin = %i", min(array, count));
    printf("\nmax = %i", max(array, count));
    printf("\nsum vsech cisel = %i", sum(array, count));
    printf("\naverage = %i", average(array, count));
    printf("\naverage bez max a min = %i", averageAlt(array, count));
}

// ---Funkce pro vypocet---

int averageAlt(int array[], int count){

    if(count <= 2){ // Pokud je pole mensi nebo rovno 2 tak vypise chybnou hlasku misto nenapsani niceho
        printf("\nPole je moc male pro vypocet prumeru bez maxima a minima");
    }

    int maximum = max(array, count);
    int minimum = min(array, count);


    int sum = 0;

    for(int i = 0; i < count; i++){

        if(array[i] != maximum && array[i] != minimum){
            sum += array[i];
        }
    }

    return sum / (count - 2); // (count - 2) kvuli odstraneni minima a maxima, proto odecteme 2
}

int average(int array[], int count){
    int sum = 0;

    for(int i = 0; i < count; i++){
        sum += array[i];
    }

    return sum / count;
}

int sum(int array[], int count){

    int sum = 0;

    for(int i = 0; i < count; i++){
        sum += array[i];
    }

    return sum;
}

int max(int array[], int count){

    int max = array[0];
    for(int i = 0; i < count; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;
}

int min(int array[], int count){

    int min = array[0];
    for(int i = 0; i < count; i++){
        if(array[i] < min){
            min = array[i];
        }
    }

    return min;
}