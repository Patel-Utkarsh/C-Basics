#include <stdio.h>
int main()
{
    int a, b;
    int sum = 0;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            sum += i;
        }
        printf("%d", sum);
    }

    else
    {
        printf("A must be smaller than B");
    }
}