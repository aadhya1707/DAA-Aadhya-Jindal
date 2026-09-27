#include <stdio.h>

int main() {
    int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = 12;

    int left = 0;
    int right = n - 1;

    int lMax = 0;
    int rMax = 0;
    int water = 0;

    while (left < right) {

        if (h[left] <= h[right]) {

            if (h[left] >= lMax)
                lMax = h[left];
            else
                water += lMax - h[left];

            left++;
        }
        else {

            if (h[right] >= rMax)
                rMax = h[right];
            else
                water += rMax - h[right];

            right--;
        }
    }

    printf("Trapped Rain Water = %d", water);

    return 0;
}
