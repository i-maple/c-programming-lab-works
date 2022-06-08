#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum, terms;
    printf("Enter the number of terms");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        terms = pow(2, i);
        printf("%d\t", terms);
        sum = sum + terms;
    }
    printf("The sum of series = %d", sum);
    return 0;
}