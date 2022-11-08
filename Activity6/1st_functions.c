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
void coprime(int n){
    int a=n, reverse = 0, remainder;

  while (a != 0) {
    remainder = a % 10;
    reverse = reverse * 10 + remainder;
    a /= 10;
  }
    if(n==reverse){
        printf("Enter number's reverse is equal to the number\n");
    }else{
        printf("Not equal to its reverse\n");
    }
}
int factorial(int n){
int i,fact=1,number=n;    
     
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
} 

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    Armstrong(n);
    coprime(n);
    factorial(n);


    return 0;
}
