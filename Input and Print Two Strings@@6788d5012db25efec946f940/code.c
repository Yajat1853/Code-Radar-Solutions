#include <stdio.h>

int main() {
    char str[100], str2[100];  // Increased size to handle larger input
    // Using fgets to read input with spaces
    //printf("Enter the first string: ");
    fgets(str, sizeof(str), stdin);  // Read the first string including spaces
    //printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Read the second string including spaces
    // Output the entered strings
    printf("You entered: %s and %s", str, str2);
    return 0;
}
