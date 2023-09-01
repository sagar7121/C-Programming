#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    if (n <= 1)
        return n;
    int newSize = 1;
    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j])
                break;
        }
        if (j == newSize) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize;
}
void findUnion(int arr1[], int arr2[], int size1, int size2) {
    int unionArray[size1 + size2];   
    for (int i = 0; i < size1; i++) {
        unionArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        unionArray[size1 + i] = arr2[i];
    }
    int unionSize = removeDuplicates(unionArray, size1 + size2);
    printf("Union of the two arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArray[i]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    findUnion(arr1, arr2, size1, size2);
    return 0;
}