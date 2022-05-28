#include<stdio.h>

void main(){
    float tempInCel, tempInFar;

    printf("Please Enter Temperature in celsius");
    scanf("%f", &tempInCel);
    tempInFar = ((9*tempInCel)/5) + 32;
    printf("The temperature in celsius, '%f' is equivalent to '%f' in farenheit", tempInCel, tempInFar);
}