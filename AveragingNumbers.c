#include <stdio.h>
int main() {
    float a,b,c,d,avg;
    printf("Enter numbers: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avg = (a+b+c+d)/4;
    printf("The Average is %.2f",avg);

}