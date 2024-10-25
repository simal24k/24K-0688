#include <stdio.h>

int main() {
    char input[100];
    int i;
    int roundA = 0, roundE = 0, roundI = 0, roundO = 0, roundU = 0;

    printf("Enter words:\n");
    scanf("%99[^\n]", input);  // Read until a newline, allowing spaces

 
    for (i = 0; input[i] != '\0'; i++) {
        // Count vowels
        if (input[i] == 'A' || input[i] == 'a') {
            roundA++;
        }
        if (input[i] == 'E' || input[i] == 'e') {
            roundE++;
        }
        if (input[i] == 'I' || input[i] == 'i') {
            roundI++;
        }
        if (input[i] == 'O' || input[i] == 'o') {
            roundO++;
        }
        if (input[i] == 'U' || input[i] == 'u') {
            roundU++;
        }
    }

    printf("a = %d e = %d i = %d o = %d u = %d\n", roundA, roundE, roundI, roundO, roundU);
    
    return 0;
}
