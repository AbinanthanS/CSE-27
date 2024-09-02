#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50 

int main() {
    char students[MAX_STUDENTS][NAME_LENGTH]; 
    int count = 0; 

    while (1) {
        if (count >= MAX_STUDENTS) {
            printf("The list is full. No more students can be added.\n");
            break;
        }

        char name[NAME_LENGTH];
        printf("Enter student's name (or type 'exit' to finish): ");
        scanf("%s", name);

        if (strcmp(name, "exit") == 0) {
            break;  
        }

        
        strcpy(students[count], name);
        count++;
        printf("%s has been added to the list.\n", name);
    }
    printf("\nList of students who have submitted their assignments:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }

    return 0;
}