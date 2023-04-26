//Input marks of 10 students in an array and then find the student with maximum marks

#include <stdio.h>

int main() {
    float marks[10];
    int i, max_index;

    // Get the input for each student's marks
    for (i = 0; i < 10; i++) {
        printf("Enter the marks for student %d: ", i+1);
        scanf("%f", &marks[i]);
    }

    // Find the student with the maximum marks
    max_index = 0;
    for (i = 1; i < 10; i++) {
        if (marks[i] > marks[max_index]) {
            max_index = i;
        }
    }

    // Output the result
    printf("Student %d has the maximum marks (%.2f)\n", max_index+1, marks[max_index]);

    return 0;
}
