/* Task 2: Write a program which hardcodes the given data as below (not to read from user),
use the standard library to converts them to numbers, and then prints their sum.

Given data:
char num_in_chars_1[] = "123";
char num_in_chars_2[] = "4567890"; */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char num_in_chars_1[] = "123";
    char num_in_chars_2[] = "4567890";

    int num1 = strtol(num_in_chars_1, NULL, 10);
    int num2 = strtol(num_in_chars_2, NULL, 10);
    int sum = num1 + num2;

    printf("The sum of %s and %s is: %d\n", num_in_chars_1, num_in_chars_2, sum);

    return 0;
}