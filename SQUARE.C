
#include <stdio.h>

int main() {
    int row = 1;
    int column;

    while (row <= 4) {
        column = 1;

        while (column <= 4) {
            printf("* ");
            column++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
