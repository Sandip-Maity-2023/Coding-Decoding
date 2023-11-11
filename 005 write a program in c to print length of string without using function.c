#include <stdio.h>

void printStringLength() {
    char str[100]; // Assuming a maximum size of 100, adjust as needed
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string without using any function
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the entered string: %d\n", length);
}

int main() {
    printStringLength(); // Call the function to print the length

    return 0;
}
