#include <stdio.h>

int main() {
    char str[100];
    char *startPtr, *endPtr, tempChar;
    int len = 0;

    printf("Enter a string: ");

    scanf("%99s", str);  
    startPtr = str;
    while (*(startPtr + len) != '\0') {
        len++;
    }

    printf("Length: %d\n", len);

    endPtr = str + len - 1;

    while (startPtr < endPtr) {
        tempChar = *startPtr;
        *startPtr = *endPtr;
        *endPtr = tempChar;

        startPtr++;
        endPtr--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

    return 0;
}
