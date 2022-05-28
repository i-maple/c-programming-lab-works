#include<stdio.h>

void main(){
    int firstNumber, secondNumber, smallestNumber;

    printf("Please enter two number to analyze");
    scanf("%d%d", &firstNumber, &secondNumber);

    if(firstNumber<secondNumber)
    {
        smallestNumber = firstNumber;
    }
    else if(secondNumber<firstNumber)
    {
        smallestNumber = secondNumber;
    }
    else{
        printf("There is some error with your input");
    }
    printf("The required smallest Number is %d", smallestNumber);
}