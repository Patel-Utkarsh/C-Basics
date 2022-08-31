#include <stdio.h>
int main() {
   int input = printf("Enter size of elemets: ");
   scanf("%d",&input);
   int array[input];

   for(int i = 0; i<input; i++) {
    printf("Enter element %d: ",i+1);
    scanf("%d",&array[i]);
   }

   for(int i = 0; i<input;i++){
    for(int j = 1; j<=10; j++) {
        printf("%d * %d = %d\n",array[i],j,array[i]*j);
    }
    printf("\n");
   }
    


}






