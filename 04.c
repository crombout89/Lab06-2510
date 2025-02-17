/*Task 4: Write a program which reads in a string from user, and then print it with each char three times.

Example:
input: “hello!”
output: “hhheeellllllooo!!!” */

#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string: \n");
    scanf("%99s", input);

    printf("\n--- OUTPUT ---\n");
    for (size_t index = 0; input[index] !='\0'; index++) {
        for (size_t multiply = 0; multiply < 3; multiply++) {
            printf("%c", input[index]);
        }
    }
    printf("\n");

    return 0;
}