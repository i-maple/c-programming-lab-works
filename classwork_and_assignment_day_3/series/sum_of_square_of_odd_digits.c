#include<stdio.h> 
#include<math.h> 

int main(){
    int i, num, ext, sum=0;
    printf("Enter a number");
    scanf("%d", &num);
    while (num!=0)
    {
        ext = num % 10;
        sum += (ext % 2!=0)?(ext*ext):0;
        num /= 10;
    }
    printf("The sum of odd digits is %d", sum);
    
    return 0;
}