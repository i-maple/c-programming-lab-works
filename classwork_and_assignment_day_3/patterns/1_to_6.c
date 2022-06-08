#include<stdio.h> 

int main(){
    int i, j, a = 1, b = 2;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <=3; j++)
        {
            printf("%d\t", a);
            a++;
        }
        a=b;
        b++;
        printf("\n");
    }
    
     return 0;
}