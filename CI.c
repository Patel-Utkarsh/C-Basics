#include <stdio.h>
void compound_int(float a, float b, int c);

int main()
{
    float principal, rate;
    int years;
    printf("Enter Principal, Rate and time: ");
    scanf("%f %f %d", &principal, &rate, &years);

    compound_int(principal, rate, years);
}

void compound_int(float a, float b, int c)
{
    float d, e, g;
    int f = 0;
    g = a;
    if (a > 0 || c > 0)
    {
        do
        {
            d = (a * b * 1) / 100;
            e = d + a;
            a = e;
            f += 1;

        } while (c != f);

        printf("Total Amount is %.1f and Total interest is %.1f", a, a - g);
    }

    else
    {
        printf("Invalid input");
    }
}