#include <stdio.h>
int main()
{
    int inp;
    int fac = 1;
    printf("Enter a number: ");
    scanf("%d", &inp);

    for (int i = inp; i >= 1; i--)
    {
        fac *= i;
    }

    printf("The Factorial of %d is %d", inp, fac);
}