#include <stdio.h>

int main() {
    int shifts[4][3];
    int i, j, pos;

    printf("Enter the original 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter insertion row index (0 to 3): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > 3) {
        printf("Invalid index.\n");
        return 0;
    }

    printf("Enter 3 new production values:\n");

    int newRow[3];

    for (j = 0; j < 3; j++) {
        scanf("%d", &newRow[j]);
    }

    for (i = 3; i > pos; i--) {
        for (j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    for (j = 0; j < 3; j++) {
        shifts[pos][j] = newRow[j];
    }

    printf("Updated 4x3 matrix:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}



