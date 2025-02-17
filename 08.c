/* Task 8: Write a program to compare each pair of the given strings and print the bigger one for each pair,
using function strcmp()

”Az” and “aZ”
“ABCDEF” and “a”
“sushi-roll” and “unagi” */

#include <stdio.h>
#include <string.h>

void compare_and_print(const char *str1, const char *str2) {
    int result = strcmp(str1, str2);

    if (result > 0) {
        printf("The bigger string between %s and %s is %s.\n", str1, str2, str1);
    } else if (result < 0) {
        printf("The bigger string between %s and %s is %s.\n", str1, str2, str2);
    } else {
        printf("The strings %s and %s are equal.\n", str1, str2);
    }
}

int main() {
    // Test pairs of strings
    const char *pair1_str1 = "Az";
    const char *pair1_str2 = "aZ";

    const char *pair2_str1 = "ABCDEF";
    const char *pair2_str2 = "a";

    const char *pair3_str1 = "sushi-roll";
    const char *pair3_str2 = "unagi";

    // Compare and print the bigger string for each pair
    compare_and_print(pair1_str1, pair1_str2);
    compare_and_print(pair2_str1, pair2_str2);
    compare_and_print(pair3_str1, pair3_str2);

    return 0;
}