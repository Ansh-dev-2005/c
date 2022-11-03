#include<stdio.h>
void Armstrong(int n) 
{ 
int temp=n; 
int d=0; 
int sum=0; 

while(temp!=0) {  
    d=temp%10; 
    sum=sum+d*d*d; 
    temp=temp/10; 
    } 
    if(sum==n) 
    printf("The Number is an Armstrong Number\n"); 
    else 
    printf("The Number is not an Armstrong Number\n"); 
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    Armstrong(n);


    return 0;
}