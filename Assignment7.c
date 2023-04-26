//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include <stdio.h>

int main() {
  char str[100];
  int len = 0;
  int rev_len = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  // Finding length of the string
  while (str[len] != '\0') {
    len++;
  }

  // Finding length of the reversed string
  int i;
  for (i = len - 1; i >= 0; i--) {
    rev_len++;
  }

  printf("Length of string: %d\n", len);
  printf("Length of reversed string: %d\n", rev_len);
  
  return 0;
}
