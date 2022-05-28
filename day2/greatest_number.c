#include<stdio.h>

void main(){
    int firstNumber, secondNumber, greatestNumber;
    printf("Please enter two numbers to analyze");
    scanf("%d%d", &firstNumber, &secondNumber);
    if (firstNumber<secondNumber)
    {
        greatestNumber = secondNumber;
    }
    else if(secondNumber<firstNumber){
        greatestNumber = firstNumber;
    }
    else
    {
        printf("there is some problem with your input");
        return;
    }

    printf("The required greatest number is %d", greatestNumber);
    
    
}