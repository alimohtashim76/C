#include <stdio.h>

int main() {
  // A variable with some specific numbers
  int numbers = 123456789;
  
  // A variable to store the reversed number
  int revNumbers = 0;

  // Reverse and reorder the numbers
  while (numbers>0) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
  }

  // Output the reversed numbers
  printf("%d", revNumbers);

  return 0;
}
