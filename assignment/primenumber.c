#include "stdio.h"
int main()
{
    int a,b;
    printf("Enter the number to be checked: ");
    scanf("%d",&a);
    for(b=2;b<=a/2;b++)
    {
        if(a%b==0)
        {
            printf("The number is not prime");
            break;
        }
    }
    if(b>a/2)
    {
        printf("The number is prime");
    }
    return 0;
}
