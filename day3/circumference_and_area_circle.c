#include<stdio.h> 
#define PI 3.1415

int main(){
    float radius, area, circumerence;
    printf("Enter the radius");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumerence = 2 * PI * radius;
    printf("The area of circle is %f and circumference is %f", area, circumerence);
     return 0;
}