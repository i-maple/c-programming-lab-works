#include <stdio.h>
#include <math.h>

int main()
{
    int i, num, tmp, ext, sum = 0;
    printf("Please enter a number");
    scanf("%d", &num);
    tmp = num;
    while (tmp != 0)
    {
        ext = tmp % 10;
        sum = sum + pow(ext, 3);
        tmp /= 10;
    }
    if (sum == num)
    {
        printf("The entered number is an armstrong number");
    }
    else
    {
        printf("The entered number is not an armstrong number");
    }

    return 0;
}