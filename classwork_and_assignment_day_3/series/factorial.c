#include<stdio.h> 

int main(){
    int i, num, factorial = 1;
    printf("Enter the number");
    scanf("%d", &num);
    for(i=num;i>0;i--){
        factorial = factorial * i;
    }
    printf("The required factorial is %d", factorial);
     return 0;
}