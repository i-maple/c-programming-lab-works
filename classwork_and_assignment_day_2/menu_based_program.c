#include <stdio.h>
#include <conio.h>
#include <process.h>

void main()
{
    int choice;
    float firstNumber, secondNumber, thirdNumber, result;
    system("cls");
    printf("Please enter your choice\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    scanf("%d", &choice);

    if (choice == 5)
    {
        exit(0);
    }
    printf("Please enter two numbers\n");
    scanf("%f%f", &firstNumber, &secondNumber);
    switch (choice)
    {
    case 1:
        result = firstNumber + secondNumber;
        break;
    case 2:
        result = firstNumber - secondNumber;
        break;
    case 3:
        result = firstNumber * secondNumber;
        break;
    case 4:
        result = firstNumber / secondNumber;
        break;
    default:
        break;
    }
    printf("The final result is %f", result);
    getch();
    main();
}