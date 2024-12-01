#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *file1;
    FILE *file2;
    file1 = fopen("input.txt", "w");
    char line[200];
    char wordToReplace[50];
    char replacement[50];

    for (int i = 0; i < 5; i++) {
        printf("Enter a line: ");
        gets(line);
        fprintf(file1, "%s\n", line);
    }
    fclose(file1);

    printf("Enter the word to replace: ");
    scanf("%s", wordToReplace);
    printf("Enter the replacement word: ");
    scanf("%s", replacement);

    file1 = fopen("input.txt", "r");
    file2 = fopen("output.txt", "w");

    while (fscanf(file1, "%s", line) != EOF) {
        int comparison = strcmp(line, wordToReplace);

        if (comparison == 0) {
            fprintf(file2, "%s", replacement);
        } else {
            fprintf(file2, "%s", line);
        }

        char nextChar = fgetc(file1);
        if (nextChar == '\n') {
            fprintf(file2, "\n");
        } else if (nextChar != EOF) {
            fprintf(file2, " ");
        }
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
