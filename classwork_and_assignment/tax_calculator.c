#include <stdio.h>

void main()
{
    float income, taxAmount, totalAmountWithTax;
    printf("Please enter your income : ");
    scanf("%f", &income);

    if (income < 10000)
    {
        taxAmount = 0;
    }
    else if (income < 20000)
    {
        taxAmount = (0.1 * (income - 10000));
    }
    else if (income < 30000)
    {
        taxAmount = (0.1 * 10000) + (0.15 * (income - 20000));
    }
    else if (income < 50000)
    {
        taxAmount = (0.1 * 10000) + (0.15 * 10000) + (0.2 * (income - 30000));
    }
    else
    {
        taxAmount = (0.1 * 10000) + (0.15 * 10000) + (0.2 * 20000) + (0.25 * (income - 50000));
    }

    totalAmountWithTax = income + taxAmount;

    printf("The total amount with %f tax is %f", taxAmount, totalAmountWithTax);
}