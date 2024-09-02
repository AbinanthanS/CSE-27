#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5
struct Student {
    int regNo;         
    char name[50];     
    int age;           
    float cgpa;        
};

int main() {
    struct Student students[MAX_STUDENTS]; 
    int i;
    int maxIndex = 0; 
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Register Number: ");
        scanf("%d", &students[i].regNo);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);

        printf("\n");

     
        if (students[i].cgpa > students[maxIndex].cgpa) {
            maxIndex = i;
        }
    }
    printf("The student with the highest CGPA is:\n");
    printf("Register Number: %d\n", students[maxIndex].regNo);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Age: %d\n", students[maxIndex].age);
    printf("CGPA: %.2f\n", students[maxIndex].cgpa);

    return 0;
}