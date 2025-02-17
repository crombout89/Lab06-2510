/* Task 7: Write a function which takes three char* (a, b, c) and then concatenate a and b to become a new string,
put the string into c, you can assume both a and b have valid string and c is large enough. The prototype is as:

void my_concat (const char *a, const char *b, char* c); */

#include <stdio.h>
#include <string.h>

void my_concat(const char *a, const char *b, char *c) {
    // Copy the string A into C
    strcpy(c, a);
    // Append string B to C
    strcat(c, b);
}

int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "world!";
    char result[100];

    my_concat(str1, str2, result);
    printf("Concatenated String: %s\n", result);

    return 0;
}