//Design a structure ‘student_record’ to store student details like name, SAP ID, enrollment number, date ofregistration and date of birth. The element date of registration is defined using another structure ‘date’ tostore date details like day, month, and year. Get data of ‘n’ students and then print the entered values [Hint:Use concept of Nested structures and Array of Structures.]
#include<stdio.h>
#include<stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};
struct student_record
{
    char name[20];
    int sap_id;
    int enrollment_no;
    struct date date_of_registration;
    struct date date_of_birth;
};
int main()
{
    struct student_record *ptr;
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    ptr = (struct student_record *)malloc(n * sizeof(struct student_record));
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the student:  ");
        scanf("%s", (ptr + i)->name);
        printf("Enter the sap_id of the student: ");
        scanf("%d", &(ptr + i)->sap_id);
        printf("Enter the enrollment_no of the student: ");
        scanf("%d", &(ptr + i)->enrollment_no);
        printf("Enter the date_of_registration of the student: ");
        scanf("%d %d %d", &(ptr + i)->date_of_registration.day, &(ptr + i)->date_of_registration.month, &(ptr + i)->date_of_registration.year);
        printf("Enter the date_of_birth of the student: ");
        scanf("%d %d %d", &(ptr + i)->date_of_birth.day, &(ptr + i)->date_of_birth.month, &(ptr + i)->date_of_birth.year);
    }
    printf("Details of the students:");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s \n", (ptr + i)->name);
        printf("SAP ID: %d \n", (ptr + i)->sap_id);
        printf("Enrollment Number: %d \n", (ptr + i)->enrollment_no);
        printf("Date of Registration: %d %d %d \n", (ptr + i)->date_of_registration.day, (ptr + i)->date_of_registration.month, (ptr + i)->date_of_registration.year);
        printf("Date of Birth: %d %d %d \n", (ptr + i)->date_of_birth.day, (ptr + i)->date_of_birth.month, (ptr + i)->date_of_birth.year);
    }
    free(ptr);
    return 0;
}