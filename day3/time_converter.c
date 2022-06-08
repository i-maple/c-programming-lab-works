#include <stdio.h>

int main()
{
    int enteredTime, minutes, hour; // time is entered in seconds
    printf("Please Enter time in seconds");
    scanf("%d", &enteredTime);
    minutes = enteredTime / 60;
    hour = minutes / 60;
    enteredTime = enteredTime % 60;
    minutes = minutes % 60;
    printf("Hour = %d, Minutes = %d, seconds = %d", hour, minutes, enteredTime);
    return 0;
}