#include <stdio.h>

void main()
{
    int length, breadth, perimeter, area;

    printf("Please enter length and breadth of a rectangle");
    scanf("%d%d", &length, &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("The area and perimeter of required rectangle are %d and %d respectively", area, perimeter);
}