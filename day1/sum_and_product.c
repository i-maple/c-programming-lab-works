#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, sum, product;
    printf("Please Enter Two Numbers");
    scanf("%d%d", &firstNumber, &secondNumber);
    sum = firstNumber + secondNumber;
    product = firstNumber * secondNumber;
    printf("The sum and the product of %d and %d are %d and %d respectively", firstNumber, secondNumber, sum, product);
}