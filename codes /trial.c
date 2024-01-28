#include <stdio.h>
#include <string.h>

#define size 8

int main() {
    char binary[size], ones[size];
    
    printf("Enter your binary string:\n");
    fgets(binary, sizeof(binary), stdin);

    // Ensure the input has a newline character at the end
    if (binary[strlen(binary) - 1] == '\n') {
        binary[strlen(binary) - 1] = '\0';
    } else {
        // Handle the case where the input is too long for the buffer
        printf("Input too long. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (binary[i] = '1') {
            ones[i] = '0';
        } else if (binary[i] = '0') {
            ones[i] = '1';
        } else {
            printf("Invalid input\n");
            return 1;
        }
    }

    printf("The input binary string is %s\n", binary);
    printf("The 1's complement of it is %s\n", ones);

    return 0;
}