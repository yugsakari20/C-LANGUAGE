#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;
    
    // Nested loop to print the pattern
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            // Check if it's the first or last row, or the first or last column
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) {
                printf("* "); // Print * for edges
            } else {
                printf("  "); // Print space for inner elements
            }
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
