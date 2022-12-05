//program to check weather a number is armstrong or not
#include<stdio.h>
int main()
{
int n,rem,sum=0,temp;
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(temp==sum)
printf("The number is armstrong");
else
printf("The number is not armstrong");
return 0;
}

