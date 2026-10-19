#include <stdio.h>
int main() {
    char secret_messages[3][100];
    int i, j, spaces, words;

    for (i = 0; i < 3; i++) {
        printf("Enter message %d (uppercase only): ", i + 1);

        scanf(" %99[A-Z ]", secret_messages[i]);

        /* Discard the remaining invalid input on this line. */
        while ((j = getchar()) != '\n' && j != EOF);
    }

    for (i = 0; i < 3; i++) {
        spaces = 0;
        words = 0;

        for (j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ')
                spaces++;
            else if (j == 0 || secret_messages[i][j - 1] == ' ')
                words++;
        }

        printf("\nMessage: %s", secret_messages[i]);
        printf("\nSpaces: %d", spaces);
        printf("\nWords: %d\n", words);
    }

    return 0;
}
