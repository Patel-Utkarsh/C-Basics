#include <stdio.h>
int print_table(int t);

int main(){
    int input;
    printf("Enter any number: ");
    scanf("%d",&input);
    print_table(input);

}


int print_table(int t) {
    for(int i = 1; i<= 10 ; i++) {
        printf("%d * %d = %d\n",t,i,t*i);
    }

}