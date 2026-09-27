#include <stdio.h>

int main() {
    int nums1[] = {1, 2};
    int nums2[] = {3, 4};

    int m = 2, n = 2;
    int arr[4];

    int i = 0, j = 0, k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            arr[k++] = nums1[i++];
        } else {
            arr[k++] = nums2[j++];
        }
    }

    // Remaining elements of nums1
    while (i < m) {
        arr[k++] = nums1[i++];
    }

    // Remaining elements of nums2
    while (j < n) {
        arr[k++] = nums2[j++];
    }

    int total = m + n;
    double median;

    if (total % 2 == 0) {
        median = (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
    } else {
        median = arr[total / 2];
    }

    printf("Median = %.2f\n", median);

    return 0;
}
