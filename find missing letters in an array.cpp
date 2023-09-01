#include <stdio.h>
#include <stdbool.h>
void findMissingNumbers(int array[], int size, int maxNum) {
    bool *presence = (bool *)calloc(maxNum + 1, sizeof(bool));
    for (int i = 0; i < size; i++) {
        presence[array[i]] = true;
    }
    printf("Missing numbers in the array: ");
    for (int i = 1; i <= maxNum; i++) {
        if (!presence[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    free(presence);
}
int main() {
    int array[] = {3, 7, 1, 5, 8};
    int size = sizeof(array) / sizeof(array[0]);
    int maxNum = 8;  
    findMissingNumbers(array, size, maxNum);
    return 0;
}