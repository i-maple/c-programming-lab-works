// Provided that Charges of electricity are
/*
upto 100 units -> 40p/unit
next 300 units -> 50p/unit
beyond 300 units -> 60p/unit
*/

#include <stdio.h>

void main()
{
    int unit;
    float amount;

    printf("Please enter the units of electricity consumed : ");
    scanf("%d", &unit);

    if (unit <= 100)
    {
        amount = unit * 0.4;
    }
    else if (unit <= 300)
    {
        amount = 100 * 0.4 + (unit - 100) * 0.5;
    }
    else{
        amount = 100 * 0.4 + 200 * 0.5 + (unit - 300) * 0.6;
    }

    amount = amount + 50;

    printf("Total payable amount is Rs. %f", amount);
}