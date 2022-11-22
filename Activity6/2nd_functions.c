#include<stdio.h>
void triangle_area(int b, int h){
    int area;
    area=(b*h)/2;
    printf("Area of right angled triangle is %d   \n ",area);
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
    printf("Remainder is %0.2d \n",a%b);

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
// Code By anSH
// Review me on Github: @Ansh-dev-2005
// Thank You