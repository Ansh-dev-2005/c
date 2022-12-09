#include "stdio.h"
int main(){
    int i,j,a[i][j];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&i,&j);
    printf("Enter the elements of the matrix: ");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            scanf("%d",&a[k][l]);
        }
    }
    printf("The matrix is: ");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",a[k][l]);
        }
        printf("/n");
    }
    for
}