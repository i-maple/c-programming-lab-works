#include<stdio.h> 

int main(){
    int a=0, b=1, c, i, n;
    printf("Enter number of terms");
    scanf("%d", &n);
    printf("%d\t", a);
    printf("%d\t", b);
    for (i = 0; i < n-1; i++)
    {
        c = a+b;
        printf("%d\t", c);
        a = b;
        b=c;
    }
        
     return 0;
}