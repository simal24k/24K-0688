#include <stdio.h>
#include <stdlib.h>

int main() {
    int length;
    char *name;

    printf("Enter total number of characters: ");
    scanf("%d", &length);
    length++;

    name = (char *)malloc(length * sizeof(char));
    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    printf("Your name is: %s\n", name);

    free(name);
    return 0;
}
