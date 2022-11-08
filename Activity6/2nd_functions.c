#include<stdio.h>
int triangle_area(int b, int h){
    printf("Area of right angled triangle is %.2d \n",b*h*.5);
}
swap(int x, int y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("First number after swapping is %d \n",x);
    printf("Second number after swapping is %d",y);
    
}
float* remainder (int a, int b){
    printf("Remainder is %0.2d \n",a/b);

}
int main(){
    int a,b;
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    remainder(a,b);
    triangle_area(a,b);
    swap(a,b);

}