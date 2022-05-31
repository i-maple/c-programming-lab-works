#include <stdio.h>

void main()
{
    int firstNumber, secondNumber, thirdNumber;
    printf("Please enter any three numbers");
    scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);
    if (firstNumber > secondNumber)
    {
        if (firstNumber > thirdNumber)
        {
            printf("%d is greatest", firstNumber);
        }
        else
        {
            printf("%d is greatest", thirdNumber);
        }
    }
    else
    {
        if (secondNumber > thirdNumber)
        {
            printf("%d is greatest", secondNumber);
        }
        else{
            printf("%d is greatest", thirdNumber);
        }
    }
}