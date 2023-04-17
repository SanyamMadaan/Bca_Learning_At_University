//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include <stdio.h>

// Function to calculate the length of a string
int stringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to reverse a string
void reverseString(char* str) {
    if (str == NULL) {
        return;
    }

    int length = stringLength(str);
    if (length <= 1) {
        return;
    }

    int i = 0;
    int j = length - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char inputString[] = "Hello, World!";

    // Calculate length of inputString
    int length = stringLength(inputString);
    printf("Length of inputString: %d\n", length);

    // Reverse inputString
    reverseString(inputString);
    printf("Reverse of inputString: %s\n", inputString);

    return 0;
}
