#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, greatestNumber;
    printf("Enter any two numbers");
    scanf("%d%d", &firstNumber, &secondNumber);
    greatestNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;
    printf("The greatest Number is %d", greatestNumber);
    return 0;
}