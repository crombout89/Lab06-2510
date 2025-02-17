/* Task 9: To define a program to find the second ‘a’ in string “apple-pineapple”, using function strchr,
print “yes” if you found the second, print “no” otherwise.

[Challenge: Try to see whether you can print the index of the second ‘a’, if found] */

#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "apple-pineapple";

    // Find the first a
    const char *first_a = strchr(str, 'a');
    if (first_a != NULL) {
        // Find the second a
        const char *second_a = strchr(first_a + 1, 'a');
        if (second_a != NULL) {
            printf("Yes.\n");
            printf("Index of second 'a': %lld\n", second_a - str);
        } else {
            printf("No.\n");
        }
    } else {
        printf("No.\n");
    }

    return 0;
}