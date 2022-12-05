#include<stdio.h>
int main(){
    struct student_structure
    {
        int SAP_ID;
        char name[20];
        char Course[20];
        int Marks;
    };
    {
        struct student_structure s1;
        printf("Enter the details of student 1 \n");
        printf("Enter the SAP ID of student 1 \n");
        scanf("%d",&s1.SAP_ID);
        printf("Enter the name of student 1 \n");
        scanf("%s",&s1.name);
        printf("Enter the course of student 1 \n");
        scanf("%s",&s1.Course);
        printf("Enter the marks of student 1 \n");
        scanf("%d",&s1.Marks);
        printf("The details of student 1 are    \n");
        printf("SAP ID of student 1 is  %d \n",s1.SAP_ID);
        printf("Name of student 1 is %s \n",s1.name);
        printf("Course of student 1 is %s \n",s1.Course);
        printf("Marks of student 1 is %d \n",s1.Marks);
    };
    
}