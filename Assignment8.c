//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int len;
  char temp;

  printf("Enter a string: ");
  scanf("%s", str);

  len = strlen(str);

  // Bubble sort algorithm
  int i;
  for (i = 0; i < len - 1; i++) {
    int j;
	for ( j = 0; j < len - i - 1; j++) {
      if (str[j] > str[j+1]) {
        // Swapping characters using a temporary variable
        temp = str[j];
        str[j] = str[j+1];
        str[j+1] = temp;
      }
    }
  }

  printf("Sorted string: %s\n", str);
  
  return 0;
}
