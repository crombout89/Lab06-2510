/* Task 6: To define a program which defines two integer arrays, and then copy array1 values into array2, using function memcpy()

Note: give your array1 some initial values, for example:
int array1 [] = {1,2,3,4,5,6,7,8,9,0};
int array2[10];
[Hint: you may assume array1 and array2 have the same length] */

#include <stdio.h>
#include <string.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int array2[10];

    memcpy(array2, array1, sizeof(array1));
    printf("Contents of Array 2: ");
    for (size_t index = 0; index < 10; index++) {
        printf("%d", array2[index]);
    }
    printf("\n");

    return 0;
}