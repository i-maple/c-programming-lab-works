#include <stdio.h>

void main()
{
    int firstNumber, secondNumber, sum;

firstNumberLabel:
    printf("Enter your First Number");
    scanf("%d", &firstNumber);

    if (firstNumber < 0)
    {
        printf("You can enter only positive numbers");
        goto firstNumberLabel;
    }
secondNumberLabel:
    printf("Enter your Second Number");
    scanf("%d", &secondNumber);

    if (secondNumber < 0)
    {
        printf("You can enter only positive numbers");
        goto secondNumberLabel;
    }
    sum = firstNumber + secondNumber;
    printf("Sum = %d", sum);
}