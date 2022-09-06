#include <stdio.h>
void printingfibonacci(int a[],int b);
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    int array[n];
    printingfibonacci(array,n);
    
    
}



void printingfibonacci(int a[],int b) {
    a[0] = 0;
    a[1] = 1;
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);

    for(int i = 2; i<b;i++) {
        a[i] = a[i-1] + a[i-2];
        printf("%d\n",a[i]);
    }
    
}
    