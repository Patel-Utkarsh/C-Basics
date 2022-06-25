#include <stdio.h>
int main()
{
    int a, b;
    int c = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    do
    {
        b = a % 10;
        c += 1;
        a /= 10;
    } while (a != 0);

    printf("Number of digits are %d", c);
}