#include <stdio.h>
#include<math.h>

void main()
{
    float firstSide, secondSide, thirdSide, semiPerimeter, area;
    printf("Please Enter Three sides of a triangle");
    scanf("%f%f%f", &firstSide, &secondSide, &thirdSide);

    if ((firstSide < (secondSide + thirdSide)) && (secondSide < (firstSide + thirdSide)) && (thirdSide < (firstSide + secondSide)))
    {
        semiPerimeter = (firstSide + secondSide + thirdSide) / 2;
        area = sqrt(semiPerimeter * (semiPerimeter - firstSide) * (semiPerimeter - secondSide) * (semiPerimeter - thirdSide));
        printf("The required area is %f", area);
    }
    else{
        printf("Not a valid triangle");
    }
}