#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int elements;
    printf("Enter size of elements: ");
    scanf("%d",&elements);

    int avg[elements];

    for(int i=1; i<=elements;i++) {
        printf("Enter element %d: ",i);
        scanf("%d",&avg[i]);
        sum += avg[i];

    }
    printf("sum is %d\n",sum);
    n = sum/elements;
    printf("Average is %d",n);









}