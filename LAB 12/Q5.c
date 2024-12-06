#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int FNlen;
    printf("Enter the total number of characters in your full name (including spaces):\n");
    scanf("%d", &FNlen);
    getchar();

    char *FN = (char *)malloc((FNlen + 1) * sizeof(char));
    if (FN == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter your full name:\n");
    scanf("%s", FN);

    char *backup = (char *)malloc((FNlen + 1) * sizeof(char));
    if (backup == NULL) {
        printf("Memory allocation failed for backup\n");
        free(FN);
        return 1;
    }
    strcpy(backup, FN);
    
    FN = realloc(FN, FNlen + 1 + 8 + 1);
    if (FN == NULL) {
        printf("Memory reallocation failed\n");
        free(backup);
        return 1;
    }

    printf("Enter your student ID:\n");
    char stID[9];
    scanf("%8s", stID);

    strcpy(FN, stID);
    FN[7] = ' ';

    for (int index = 0; index < FNlen; index++) {
        FN[index + 8] = backup[index];
    }
    FN[FNlen + 8] = '\0';

    printf("Updated string: %s\n", FN);

    free(FN);
    free(backup);

    return 0;
}
