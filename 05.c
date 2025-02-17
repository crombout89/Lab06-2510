/* Task 5: Write a program which reads from a hardcoded string “123 456 789”, (NO user input) using function sscanf,
and then using function sprintf to print ”the result is %d” (the sum of the three numbers) into a string (named s),
at the last print out s.

[Hint: Fairly similar to the combination of the two examples of sprintf and sscanf] */

#include <stdio.h>

int main() {
    char input[] = "123 456 789";
    int num1, num2, num3;

    sscanf(input, "%d %d %d", &num1, &num2, &num3);
    int sum = num1 + num2 + num3;

    char string[50];
    sprintf(string, "The result is: %d", sum);
    printf("%s\n", string);

    return 0;
}