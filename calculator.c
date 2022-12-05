#include <stdio.h>
#include<math.h>
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int div(int a, int b)
{
    return a/b;
}
int mul(int a, int b)
{
    return a*b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum: %d",sum(a,b));
    printf("Multiplication: %d",mul(a,b));
    printf("Division: %d",div(a,b));
    printf("Subtraction: %d",sub(a,b));

    return 0;   
}