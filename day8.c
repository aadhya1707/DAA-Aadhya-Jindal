//Given an m × n matrix, return all elements of the matrix in spiral order
#include <stdio.h>

void printSpiral(int rows, int cols, int matrix[rows][cols]) {
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    printf("[");

    while (top <= bottom && left <= right) {
        // 1. Traverse Left to Right along the top row
        for (int i = left; i <= right; i++) {
            printf("%d, ", matrix[top][i]);
        }
        top++; // Move top boundary down

        // 2. Traverse Top to Bottom along the right column
        for (int i = top; i <= bottom; i++) {
            printf("%d, ", matrix[i][right]);
        }
        right--; // Move right boundary left

        // 3. Traverse Right to Left along the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d, ", matrix[bottom][i]);
            }
            bottom--; // Move bottom boundary up
        }

        // 4. Traverse Bottom to Top along the left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d, ", matrix[i][left]);
            }
            left++; // Move left boundary right
        }
    }

    printf("\b\b]\n"); // Removes trailing comma and closes bracket
}

int main() {
    int matrix[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    printf("Spiral Order:\n");
    printSpiral(3, 4, matrix);

    return 0;
}
