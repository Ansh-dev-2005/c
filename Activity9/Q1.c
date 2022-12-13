
//structure 'product' to store the details of product purchased.
//using pointer to structure to store the address of the structure.
struct product
{
    char name[20];
    int quantity;
    float price;
    float amount;
};
int main()
{
struct product *ptr;
int n, i;

printf("Enter the number of products purchased: ");
scanf("%d", &n);
ptr = (struct product *)malloc(n * sizeof(struct product));
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