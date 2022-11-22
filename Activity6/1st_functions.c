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
    int a=n, reverse = 0, remainder, i, hcf;
 
  while (a != 0) {
    remainder = a % 10;
    reverse = reverse * 10 + remainder;
    a /= 10;

  }
   if(reverse>n){
     for(i=1;i<=reverse;i++)
	 {
	  if(reverse==0 && reverse%i==0)
	  {
	   hcf = i;
	  }
	 }
}else{
    for(i=1;i<=n;i++)
	 {
	  if(reverse%i==0 && n%i==0)
	  {
	   hcf = i;
	  }
	 }
}
if(hcf == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS. \n", reverse, n);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS. \n", reverse, n);
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
