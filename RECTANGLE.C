

#include <stdio.h>

int main() {
    int row = 1;
    int column;

    while (row <= 3) {
        column = 1;

        while (column <= 6) {
            printf("*");
            column++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
