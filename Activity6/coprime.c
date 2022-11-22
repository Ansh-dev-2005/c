#include<stdio.h>
int coprime(int n){
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
  return hcf;
}
int main()
{   

    int hcf;
    int n;
    int i;
    printf("Enter the number");
    scanf("%d",&n);
    if(hcf == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS.", reverse(n), n);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS.", reverse(n), n);
	 }
}
// Code By anSH
// Review me on Github: @Ansh-dev-2005
// Thank You