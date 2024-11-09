#include <stdio.h>
#include <string.h>

int main() {
    char words[100][100];
    int a, i;

    printf("Enter the number of words you want to enter: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]); 
    }


    char temp[100];
    for (int j = 0; j < a - 1; j++) {
        for (int k = 0; k < a - j - 1; k++) {
            if (strcmp(words[k], words[k + 1]) > 0) {
                strcpy(temp, words[k]);
                strcpy(words[k], words[k + 1]);
                strcpy(words[k + 1], temp);
            }
        }
    }

    printf("Sorted words:\n");
    for (i = 0; i < a; i++) {
        puts(words[i]);
    }

    return 0;
}
