#include <stdio.h>
int main() {
    int array[] = {5, 10, 15, 20, 25};
    int numElements = sizeof(array) / sizeof(array[0]);
    int *ptr = array;
    int sum = 0;
    for (int i = 0; i < numElements; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}