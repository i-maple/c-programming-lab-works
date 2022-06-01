#include<stdio.h>

void main()
{
    int firstNumber, secondNumber, hcf, lcm, minimumAmongTwo;

    printf("Please enter two number you want to check");
    scanf("%d%d", &firstNumber, &secondNumber);
    minimumAmongTwo = (firstNumber<secondNumber)?firstNumber:secondNumber;
    for (int i = 1; i <= minimumAmongTwo; i++)
    {
        if (firstNumber%i==0 && secondNumber%i==0)
        {
            hcf = i;
        }
    }
    lcm = (firstNumber*secondNumber)/hcf;

    printf("HCF = %d and LCM = %d", hcf, lcm);
    
}