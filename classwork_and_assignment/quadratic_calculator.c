#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, x1, x2, det;

    printf("Please enter three coefficients of a quadratic equation a, b, c");
    scanf("%f%f%f", &a, &b, &c);

    det = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(det))/(2*a);
    x2 = (-b - sqrt(det))/(2*a);

    if(det==0){
        printf("Roots are real and equal");
        printf("Root x1 = %f, root x2 = %f", x1, x2);
    }
   else if(det==0){
        printf("Roots are real and distinct");
        printf("Root x1 = %f, root x2 = %f", x1, x2);
    }
   else{
        printf("Roots are imaginary");
    }
    
}