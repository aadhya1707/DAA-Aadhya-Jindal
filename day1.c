//Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 
#include <stdio.h>
int main() {
    char input[20];
    int expected_sum = 45; // Sum of digits from 0 to 9 (0+1+2+...+9 = 45)
    int actual_sum = 0;
    printf("Enter a number containing 9 unique digits (0-9 with one missing): ");
    scanf("%s", input);

    // Calculate the sum of the digits present in the input string
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            actual_sum += (input[i] - '0'); // Convert char to int and add
        }
    }
    // The missing digit is the difference between the total expected sum and the actual sum
    int missing_digit = expected_sum - actual_sum;
    if (missing_digit >= 0 && missing_digit <= 9) {
        printf("The missing digit is: %d\n", missing_digit);
    } else {
        printf("Invalid input! Please ensure the input consists of digits from 0 to 9.\n");
    }

    return 0;
}
