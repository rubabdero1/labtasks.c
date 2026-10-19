#include <stdio.h>
int main() {
    char word_grid[3][100];
    char words[3][3][100];
    char longest[100];
    int i, j, k, len, max = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }

    for (i = 0; i < 3; i++) {
        j = 0;
        k = 0;

        while (word_grid[i][j] != '\0') {
            if (word_grid[i][j] != ' ') {
                len = 0;

                while (word_grid[i][j] != '\0' &&
                       word_grid[i][j] != ' ') {
                    words[i][k][len] = word_grid[i][j];
                    len++;
                    j++;
                }

                words[i][k][len] = '\0';

                if (len > max) {
                    max = len;
                    for (int x = 0; x <= len; x++)
                        longest[x] = words[i][k][x];

                    printf(""); /* No output needed here. */
                }

                k++;
            } else {
                j++;
            }
        }
    }

    printf("\nLongest word: %s", longest);
    printf("\nLength: %d\n", max);

    
}
