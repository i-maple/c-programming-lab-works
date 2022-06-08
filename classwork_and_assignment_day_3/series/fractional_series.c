#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float val, sum = 0, x;
    printf("Enter the number of terms");
    scanf("%d", &n);
    printf("Enter the value of x");
    scanf("%f", &x);
    for (i = 0; i < n; i++)
    {
        val = 1 / pow(x, i);
        printf("%f \t", val);
        sum = sum + val;
    }
    printf(" \n Sum = %d ", sum);
}