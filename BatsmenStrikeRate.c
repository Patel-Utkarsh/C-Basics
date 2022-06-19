#include <stdio.h>

int main(){
    float a,b,st_rate;
    printf("Enter Number of Runs and balls: ");
    scanf("%f %f",&a,&b);
    st_rate = (a/b)*100;
    if (a < 0 || b < 0) { 
        printf("Invalid Input");
    }
    else if (a == 0 && b == 0) {
        printf("-");
    }
    else if (st_rate>600) {
        printf("Impossible");
    }
    else {
        printf("The Strike Rate is %.1f",st_rate);
    }




}