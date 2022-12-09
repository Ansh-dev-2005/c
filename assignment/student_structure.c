#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    char course[100];
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 1; i <= 10; ++i) {
        
        printf("\nEnter the SAP_ID for %d,\n", i);
        scanf("%d", &s[i].roll);
        printf("Enter first name: ");
        scanf("%s", &s[i].Name);
        printf("Enter course: ");
        scanf("%s", &s[i].course);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 1; i <= 10; ++i) {
        printf("\nRoll number: %d\n", s[i].roll);
        printf("Name: %d", s[i].Name);
        printf("Course: %d", s[i].course);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
