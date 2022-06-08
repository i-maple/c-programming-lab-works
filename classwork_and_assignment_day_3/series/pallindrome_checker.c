#include<stdio.h> 

int main(){
    int i, num, ext, tmp, reversedNumber=0;
    printf("Enter a number");
    scanf("%d", &num);
    tmp = num;
    while (tmp !=0)
    {
        ext = tmp % 10;
        reversedNumber = reversedNumber*10 + ext;
        tmp /= 10;
    }
    if (num==reversedNumber)
    {
        printf("The number is pallindrome");
    }
    else{
        printf("The number is not pallindrome");
    }
     return 0;
}