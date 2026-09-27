//Rotate Array (LeetCode 189) This is the optimal three-step reversal method to solve the "Rotate Array" problem (LeetCode 189) in O(N) time and O(1) space.
#include <stdio.h>

// Helper function to reverse a section of the array
void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array right by k steps
void rotate(int* nums, int numsSize, int k) {
    // Handle cases where k is larger than array size
    k = k % numsSize;

    // Step 1: Reverse the entire array
    reverse(nums, 0, numsSize - 1);

    // Step 2: Reverse the first k elements
    reverse(nums, 0, k - 1);

    // Step 3: Reverse the remaining n - k elements
    reverse(nums, k, numsSize - 1);
}

// Helper function to print array
void printArray(int* nums, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", nums[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    printf("Original Array: ");
    printArray(nums, size);

    rotate(nums, size, k);

    printf("Rotated Array (k = %d): ", k);
    printArray(nums, size);

    return 0;
}
