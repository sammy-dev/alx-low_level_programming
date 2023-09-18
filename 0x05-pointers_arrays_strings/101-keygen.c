#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random integer in a given range
int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time

    // Define the character set for the password
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Define the length of the password (adjust as needed)
    const int passwordLength = 12;

    char password[passwordLength + 1];  // +1 for the null terminator

    for (int i = 0; i < passwordLength; i++) {
        // Generate a random index to select a character from the charset
        int index = randomInt(0, sizeof(charset) - 1);

        // Assign the selected character to the password
        password[i] = charset[index];
    }

    password[passwordLength] = '\0';  // Null-terminate the password

    // Print the generated password
    printf("%s\n", password);

    return 0;
}
