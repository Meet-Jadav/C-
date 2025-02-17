#include <stdio.h>

void print_star_pyramid(int rows) {
    int i, j;
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows-i; ++j) {                // Print spaces
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {                        // Print stars
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int num_rows = 10; // Adjust this to change the number of rows
    print_star_pyramid(num_rows);
    return 0;
}
