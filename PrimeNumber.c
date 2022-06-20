#include <stdio.h>
int main() {
    int a;
    int p = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (int i = 1 ; i<=a; i++){
        if(a%i==0) {
            p+=1;
        }

    }

    if (p==2) {
        printf("Yes, %d is a prime number",a);
    }
    else if (p>2 || p<2) {
        printf("No, %d is not a prime number",a);
    }

   
}