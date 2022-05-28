// Name marks in 3 sub
// Name Marks total perentage grade

#include <stdio.h>

int main()
{
    int marksInPhysics, marksInChemistry, marksInMaths, total;
    float percentage;
    char name[100];

    printf("Please Enter your Name");
    scanf("%s", name);
    printf("Please Enter your marks in physics, chemistry and maths");
    scanf("%d%d%d", &marksInPhysics, &marksInChemistry, &marksInMaths);

    if (marksInPhysics > 45 && marksInChemistry > 45 && marksInMaths > 45)
    {
        printf("Name \t\t Physics \t Chemistry \t Maths \t Percentage \t Grade \n");
        percentage = ((marksInPhysics + marksInChemistry + marksInMaths) * 100) / 300;

        if (percentage >= 90)
        {
            printf("%s \t\t %d \t %d \t %d \t %f \t A+", name, marksInPhysics, marksInChemistry, marksInMaths, percentage);
        }
        else if (percentage >= 80)
        {
            printf("%s \t\t %d \t %d \t %d \t %f \t A-", name, marksInPhysics, marksInChemistry, marksInMaths, percentage);
        }
        else if (percentage >= 70)
        {
            printf("%s \t\t %d \t %d \t %d \t %f \t B+", name, marksInPhysics, marksInChemistry, marksInMaths, percentage);
        }
        else if (percentage >= 60)
        {
            printf("%s \t\t %d \t %d \t %d \t %f \t B", name, marksInPhysics, marksInChemistry, marksInMaths, percentage);
        }
        else
        {
            printf("%s \t\t %d \t %d \t %d \t %f \t C", name, marksInPhysics, marksInChemistry, marksInMaths, percentage);
        }
    }
    else
    {
        printf("Name \t\t Remarks\n");
        printf("%s \t\t Failed", name);
    }
}