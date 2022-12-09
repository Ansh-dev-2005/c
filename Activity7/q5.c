#include<stdio.h>
int main(){
    int a,n ,temp,arr[100];
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element to be inserted");
    scanf("%d",&a);
    printf("Enter the element to be inserted");
    scanf("%d",&temp);
    for(int i=n-1;i>=a-1;i--){
        arr[i+1]=arr[i];
    }
    arr[a-1]=temp;
    printf("The new array is");
    for(int i=0;i<n+1;i++){
        printf("%d",arr[i]);
    }
    printf("Enter the position of the element to be deleted");
    scanf("%d",&a);
    for(int i=a-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("The new array is ");
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}