#include <stdio.h>
#include <conio.h>

int main() {
    int n = 5; // Number of rows

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
