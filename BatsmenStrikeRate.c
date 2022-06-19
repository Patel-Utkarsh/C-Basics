#include <stdio.h>

int main()
{
    int a, b;
    float st_rate;
    printf("Enter Number of Runs and balls: ");
    scanf("%d %d", &a, &b);
    st_rate = (a / b) * 100;
    

    if (a < 0 || b < 0)
    {
        printf("Invalid Input");
    }
    else if (a == 0 && b == 0)
    {
        printf("-");
    }
    else if (st_rate > 600)
    {
        printf("Impossible");
    }
    else
    {
        printf("The Strike Rate is %.1f", st_rate);
    }
}