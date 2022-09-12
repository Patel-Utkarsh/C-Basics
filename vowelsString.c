#include <stdio.h>
#include <string.h>
char countvowels(char arr[]);

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s",str);
    countvowels(str);




}

char countvowels(char arr[]) {
    int a = strlen(arr);
    int count = 0;
    for(int i = 0; i<a ;i++) {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++;

        }
    }
    printf("Number of vowels in a given string are %d",count);
}




