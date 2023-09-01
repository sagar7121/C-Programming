#include <stdio.h>
int main() {
    int array[] = {5, 10, 15, 20, 25};
    int numElements = sizeof(array) / sizeof(array[0]);
    printf("Number of elements in the array: %d\n", numElements);
    return 0;
}