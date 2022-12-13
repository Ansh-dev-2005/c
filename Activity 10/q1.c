//Design a structure ‘subject’ to store the details of the subject (subject name, subject code, etc.). Usingstructure pointer allocate dynamic memory to structure, and obtain details of ‘n’ subjects with for loop.
#include<stdio.h>
#include<stdlib.h>
struct subject
{
    char name[20];
    int code;
    int credits;
};
int main()
{
    struct subject *ptr;
    int n, i;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    ptr = (struct subject *)malloc(n * sizeof(struct subject));
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the subject:  ");
        scanf("%s", (ptr + i)->name);
        printf("Enter the code of the subject: ");
        scanf("%d", &(ptr + i)->code);
        printf("Enter the credits of the subject: ");
        scanf("%d", &(ptr + i)->credits);
    }
    printf("Details of the subjects:");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s \n", (ptr + i)->name);
        printf("Code: %d \n", (ptr + i)->code);
        printf("Credits: %d \n", (ptr + i)->credits);
    }
    free(ptr);
    return 0;
}