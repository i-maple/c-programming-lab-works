#include<stdio.h>

void main()
{
    int firstNumber, secondNumber, thirdNumber, middleNumber;

    printf("Please Enter three numbers you want to analyze");
    scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber < secondNumber && firstNumber > thirdNumber || firstNumber > secondNumber && firstNumber < thirdNumber){
        middleNumber = firstNumber;
    }
    else if (secondNumber < firstNumber && secondNumber > thirdNumber || secondNumber > firstNumber && secondNumber < thirdNumber)
    {
        middleNumber = secondNumber;
    }
    else if (thirdNumber < firstNumber && thirdNumber > secondNumber || thirdNumber > firstNumber && thirdNumber < secondNumber)
    {
        middleNumber = thirdNumber;
    }
    else{
        printf("Enter all unequal integers");
    }

    printf("The middle number required is : %d", middleNumber);
}