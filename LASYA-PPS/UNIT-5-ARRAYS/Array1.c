#include <stdio.h>

int main() {
    // Declare a character array to store the registration number
    char regNo[15];
    
    // Variable to store each character and length counter
    char ch;
    int length = 0;
    
    // Prompt the user to enter the registration number
    printf("Enter the registration number: ");
    
    // Read characters one by one using getchar until a newline ('\n') is encountered
    while((ch = getchar()) != '\n') {
        regNo[length] = ch;  // Store the character in the array
        length++;            // Increment the length counter
    }
    
    // Add null character to mark the end of the string (optional)
    regNo[length] = '\0'; 
    
    // Output the length of the registration number
    printf("The length of the registration number is: %d\n", length);
    
    return 0;
}
