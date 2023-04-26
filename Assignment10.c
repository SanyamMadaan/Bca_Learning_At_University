//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


#include <stdio.h>

#define MAX_SIZE 100

enum arrayType {ODD, EVEN, MIXED};

int findType(int n, int arr[]) {
  int oddCount = 0;
  int evenCount = 0;
int i;
  for ( i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
  }

  if (evenCount == 0) {
    return ODD;
  } else if (oddCount == 0) {
    return EVEN;
  } else {
    return MIXED;
  }
}

int main() {
  int arr[MAX_SIZE];
  int n;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  int i;
  for ( i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int type = findType(n, arr);

  switch(type) {
    case ODD:
      printf("The array is an ODD ARRAY\n");
      break;
    case EVEN:
      printf("The array is an EVEN ARRAY\n");
      break;
    case MIXED:
      printf("The array is a MIXED ARRAY\n");
      break;
    default:
      printf("Invalid array type\n");
  }

  return 0;
}
