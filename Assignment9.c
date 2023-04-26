//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char name[MAX_SIZE];
  int freq[26] = {0}; // Initialize all frequencies to 0

  printf("Enter a name: ");
  scanf("%s", name);

  int len = strlen(name);

  // Loop through each character in the name
int i;
  for (i = 0; i < len; i++) {
    // Convert the character to its corresponding index in the frequency array
    int index = name[i] - 'a';
    freq[index]++;
  }

  // Print the frequency of each letter in the name

  for ( i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      printf("%c - %d\n", i+'a', freq[i]);
    }
  }

  return 0;
}
