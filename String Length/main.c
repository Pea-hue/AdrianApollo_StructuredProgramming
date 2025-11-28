#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    // Input
    printf("Enter a string (e.g., your name): ");
    scanf("%s", name);   // Reads one word (no spaces)

    // Output the string
    printf("You entered: %s\n", name);

    // Find string length
    int length = strlen(name);

    // Display the length
    printf("Length of the string: %d\n", length);

    return 0;
}
