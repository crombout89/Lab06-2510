/* Task 10: Write a function which takes in two strings, and then prints the longer one, using strlen()
to understand which one to print */

#include <stdio.h>
#include <string.h>

void print_longer_string(const char *str1, const char *str2) {
    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);

    if (length1 > length2) {
        printf("The longer string is: %s\n", str1);
    } else if (length1 < length2) {
        printf("The longer string is: %s\n", str2);
    } else {
        printf("%s and %s are the same length.\n", str1, str2);
    }
}

int main() {
    const char *string1 = "Hello, world!";
    const char *string2 = "Goodbye!";

    print_longer_string(string1, string2);

    return 0;
}