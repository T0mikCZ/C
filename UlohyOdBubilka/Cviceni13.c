#include <stdio.h>
#include <math.h>

int main(){
    printf("%f", getVolume(6.3710));
    return 0;
}
double getVolume(double radius){
    double volume = (4 / pow(acos(-1), 3)) * (pow(radius, 3));
    return volume; 
}