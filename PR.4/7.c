#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print asterisks in the first and last columns
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for inner cells
            }
        }
        printf("\n");
    }

    return 0;
}
