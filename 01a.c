/*Task 1 Part 1: Write a program which reads in a word and then to print it in all capital letters. Example:

input: apple -> output: print APPLE

input: intel -> output: print INTEL

[Hint: to check out ASCII table to find out the distance between ‘a’ and ‘A’, this distance applied to all letters,
between ‘b’ and ‘B’, between ‘c’ and ‘C’ and so on]
*/

#include <stdio.h>

int main() {
  char word[100];
  printf("Enter a word to convert to uppercase:\n");
  scanf("%99s", word);

  for (size_t index = 0; word[index] !='\0'; index++) {
    if (word[index] >= 'a' && word[index] <= 'z') {
      // Convert to uppercase by subtracting 32.
      word[index] = word[index] - 32;
    }
  }
  printf("Uppercase Format: %s\n", word);

  return 0;
}