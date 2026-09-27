#include <stdio.h>

int main() {
    int arr[] = {-4, -3, -5, 1, 2, 3};
    int n = 6;

    int result[6];
    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right) {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        if (leftSquare > rightSquare) {
            result[pos] = leftSquare;
            left++;
        } else {
            result[pos] = rightSquare;
            right--;
        }

        pos--;
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
