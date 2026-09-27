//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
//Return the single element that appears only once.
//Your solution must run in O(log n) time and O(1) space.
#include <stdio.h>

int singleNonDuplicate(int* nums, int numsSize) {
    int low = 0;
    int high = numsSize - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // Ensure mid is even to easily check pairs starting at even indices
        if (mid % 2 == 1) {
            mid--;
        }

        // If pair matches, the single element is on the right side
        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;
        } 
        // Otherwise, the single element is on the left side (or at mid)
        else {
            high = mid;
        }
    }

    return nums[low];
}

int main() {
    int nums1[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", singleNonDuplicate(nums1, size1));

    int nums2[] = {3, 3, 7, 7, 10, 11, 11};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", singleNonDuplicate(nums2, size2));

    return 0;
}
