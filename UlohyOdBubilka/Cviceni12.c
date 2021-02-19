#include <stdio.h>
#include <math.h>

int main()
{
    int coordinate1[] = {5,1};
    int coordinate2[] = {-2,18};

    printf("%d", getDistance(coordinate1, coordinate2));

    return 0;
}

int getDistance(int coordinate1[], int coordinate2[]){

    int distanceX = coordinate1[0] - coordinate2[0];
    int distanceY = coordinate1[1] - coordinate2[1];

    int distance = sqrt((distanceX*distanceX) + (distanceY*distanceY));

    return distance;
}
