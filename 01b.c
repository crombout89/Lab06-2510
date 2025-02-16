/* Task 1 Part 2: Same question as Part 1, however, this time you are required to use standard-library */

#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    printf("Enter a word to convert to uppercase:\n");
    scanf("%99s", word);

    for (size_t index = 0; word[index] != '\0'; index++) {
        if (islower(word[index])) {
            word[index] = toupper(word[index]);
        }
    }
    printf("Uppercase Format: %s", word);

    return 0;
}