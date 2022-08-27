#include <stdio.h>
int main()
{
    
    int max_discount = 75;
    float discount;
    int done;
    int a = printf("Enter the amount of product: ");
    scanf("%d",&a);
    discount = 0.1*a;
    

    if (discount > max_discount)
    {
        printf("After availing 10 percent upto rs 75 discount the final price is %d", a - max_discount);
    }

    else 
    {

        printf("After availing 10 percent upto rs 75 discount the final price is %d", a - (int) discount);
    }
}