#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 3, 5, 10, 20};
    int arr2[] = {15, 17, 26, 134, 135};

    int n = 5, m = 5;

    int i = 0, j = 0;
    int minDiff = 999999;

    while (i < n && j < m) {

        int diff = abs(arr1[i] - arr2[j]);

        if (diff < minDiff)
            minDiff = diff;

        // Smaller element ko move karo
        if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }

    printf("Smallest Difference = %d\n", minDiff);

    return 0;
}
