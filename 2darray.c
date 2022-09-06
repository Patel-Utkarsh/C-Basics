#include <stdio.h>
int main() {
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int array[r][c];

    for(int i = 0; i<r;i++) {
        for(int j = 0; j<c; j++) {
            printf("Enter [%d,%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }

    }

    for(int i = 0; i<r;i++) {
        for(int j = 0; j<c;j++) {
            printf("Array[%d][%d] is %d\n",i,j,array[i][j]);
        }
    }


}