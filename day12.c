#include <stdio.h>

int main() {
    int arr[] = {5, 5, 7, 8, 8, 9, 9, 10, 10};
    int n = 9;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");

    for (int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
