#include<stdio.h>
union product{
    char name[100];
    float m;
    int n;
    float o;
    };
    int main()
    {int x, y;
    union product p;
    printf("Enter Product Name: ");
    scanf("%s",p.name);
    printf("Enter Price per unit: ");
    scanf("%f", &p.m);
    x= p.m;
    printf("Enter Quantity: ");
    scanf("%d", &p.n);
    y=p.n;
    p.o=x*y;
    printf("Total Amount= %f",p.o);
    return 0;}