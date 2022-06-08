#include <stdio.h>

int main()
{
    int num, count, sum=0, ext;
    printf("Enter the number");
    scanf("%d", &num);
    while (num != 0)
    {
        ext = num % 10;
        sum = sum + ext;
        count++;
        num /= 10;
    }
    printf("The number of digits is %d and the sum of digits is %d", count, sum);

    return 0;
}