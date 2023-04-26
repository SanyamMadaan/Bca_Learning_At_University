//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Display menu
        printf("Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Get input numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform calculation based on user's choice
        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4: // Division
                if (num2 == 0) {
                    printf("Error: Division by zero\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice, please enter a number between 1 and 4\n");
                break;
        }
    } while (1); // Infinite loop, will exit when user chooses to quit

    return 0;
}
