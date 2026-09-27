// Write a program using a while loop that repeatedly asks the user to enter the password and stops only when the correct password is entered. Finally, display "Login successful!".
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correct_password[] = "secret123";
    int login_successful = 0;

    while (!login_successful) {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correct_password) == 0) {
            login_successful = 1;
        } else {
            printf("Incorrect password. Please try again.\n");
        }
    }

    printf("Login successful!\n");

    return 0;
}
