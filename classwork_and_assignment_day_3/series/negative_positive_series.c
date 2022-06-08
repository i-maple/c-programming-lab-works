#include <stdio.h>

int main()
{
    int i, num, term, neg = 1, sum;
    printf("Enter the numbers of terms");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        term = neg * i * 2;
        sum = sum + term;
        printf("%d\t", term);
        neg = -neg;
    }
    printf("The sum = %d", sum);

    return 0;
}