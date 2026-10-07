

#include <stdio.h>

int main() {
    int row = 1, column, spaces, stars;

    //upperpart

    while (row <= 3) {
        spaces = 3 - row;
        stars = 2 * row - 1;

        column = 1;
        while (column <= spaces) {
            printf(" ");
            column++;
        }

        column = 1;
        while (column <= stars) {
            printf("*");
            column++;
        }

        printf("\n");
        row++;
    }

    //lowerpart

    row = 2;

    while (row >= 1) {
        spaces = 3 - row;
        stars = 2 * row - 1;

        column = 1;
        while (column <= spaces) {
            printf(" ");
            column++;
        }

        column = 1;
        while (column <= stars) {
            printf("*");
            column++;
        }

        printf("\n");
        row--;
    }

    return 0;
}











