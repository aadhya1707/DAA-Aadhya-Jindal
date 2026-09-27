//Input a number from the user and print
//a. Number of 1 and number of 0 in its binary representation.
//b. Number of consecutive 1 in the binary representation.
#include <stdio.h>

int main() {
    int num;
    int count1 = 0, count0 = 0;
    int current1s = 0, max1s = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Process the number using basic math division
    while (num > 0) {
        int remainder = num % 2;  // Gets the last binary digit (0 or 1)

        if (remainder == 1) {
            count1++;
            current1s++;
            if (current1s > max1s) {
                max1s = current1s;  // Update maximum consecutive 1s
            }
        } else {
            count0++;
            current1s = 0;         // Reset consecutive 1s count
        }

        num = num / 2;             // Move to the next binary digit
    }

    // Print the final results
    printf("Number of 1s: %d\n", count1);
    printf("Number of 0s: %d\n", count0);
    printf("Max consecutive 1s: %d\n", max1s);

    return 0;
}
