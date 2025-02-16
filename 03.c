/* Task 3: Write a program reads in a string and then prints “yes” or “no” based on whether the input is a
valid BCIT ID, let’s use standard-library.

[Hint: valid BCIT IDs need to be 9 chars long with first char as ‘a’ or ‘A’ followed by 8 digits]

Examples:
A00123456 -> yes
a12345678 -> yes
aa1234567 -> no (why: 2nd char should be digit)
A123456789 -> no (why: too long – it has 10 chars in total) */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char input[100];
    printf("Enter a BCIT ID:\n");
    scanf("%99s", input);

    // Check if the length of the string input is 9
    if (strlen(input) != 9) {
        printf("Not a valid ID.\n");
        return 0;
    }

    // Check if the first letter is A.
    if (tolower(input[0]) != 'a') {
        printf("Not a valid ID.\n");
        return 0;
    }

    // Check if the next 8 digits are numbers.
    for (size_t index = 1; index < 9; index++) {
        if (!isdigit(input[index])) {
            printf("Not a valid ID.\n");
            return 0;
        }
    }

    // If all cases pass, it is a valid ID.
    printf("This is a valid BCIT ID.\n");

    return 0;
}