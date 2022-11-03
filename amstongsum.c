#include<stdio.h>

int main()
{
int a=0;
int *ptr=&a;
printf("%d %d",*ptr++,++*ptr);
return 0;
}