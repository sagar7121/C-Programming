#include <stdio.h>
int main() {
    int arr[] = {2, 4, 2, 8, 4, 4, 6, 8, 6, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    int frequency[maxElement + 1];
    for (int i = 0; i <= maxElement; i++) {
        frequency[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    for (int i = 0; i <= maxElement; i++) {
        if (frequency[i] > 0) {
            printf("%d occurs %d times\n", i, frequency[i]);
        }
    }
    return 0;
}