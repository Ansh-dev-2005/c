//Design a union ‘product’ to store the details of the product purchased like product name, price per unit,number of quantities purchased, and amount spent. Get the name, price per unit, and number of quantitiesof the product purchased. Calculate the amount spent on the product and then display all the details of theprocured product using union pointers.
#include<stdio.h>
#include<stdlib.h>
union product
{
    char name[20];
    int quantity;
    float price;
    float amount;
};
int main()
{
    union product *ptr;
    int n, i;
    printf("Enter the number of products purchased: ");
    scanf("%d", &n);
    ptr = (union product *)malloc(n * sizeof(union product));
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the product:  ");
        scanf("%s", (ptr + i)->name);
        printf("Enter the quantity of the product: ");
        scanf("%d", &(ptr + i)->quantity);
        printf("Enter the price of the product: ");
        scanf("%f", &(ptr + i)->price);
        (ptr + i)->amount = (ptr + i)->quantity * (ptr + i)->price;
    }
    printf("Details of the products purchased:");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s \n", (ptr + i)->name);
        printf("Quantity: %d \n", (ptr + i)->quantity);
        printf("Price: %f \n", (ptr + i)->price);
        printf("Amount: %f \n", (ptr + i)->amount);
    }
    free(ptr);
    return 0;
}