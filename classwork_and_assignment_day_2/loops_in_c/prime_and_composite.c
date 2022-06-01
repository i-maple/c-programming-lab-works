#include<stdio.h>

void main()
{
    int enteredNumber, checker;

    printf("Please Enter A number : ");
    scanf("%d", &enteredNumber);

    if (enteredNumber==0)
    {
        printf("The number cannot be zero");
    }
    

    for (int i = 1; i <= enteredNumber; i++)
    {
        if (enteredNumber%i==0)
        {
            checker++;
        }
    }
    if(checker==1){
        printf("The number is neither prime nor composite");
    }
    else if(checker==2){
        printf("The number is prime");
    }
    else{
        printf("The number is composite");
    }
    
}