#include <stdio.h>

int main() {
    int size;

    printf("Enter array size = ");
    scanf("%d", &size);

    int arr[100];
    int seen[100] = {0};
    int duplicates[100];
    int duplicateCount = 0;

    for (int i = 0; i < size; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        if (seen[arr[i]] == 1) {
            int alreadyRecorded = 0;
            for (int j = 0; j < duplicateCount; j++) {
                if (duplicates[j] == arr[i]) {
                    alreadyRecorded = 1;
                    break;
                }
            }
            if (alreadyRecorded != 1) {
                duplicates[duplicateCount++] = arr[i];
            }
        }
        seen[arr[i]] = 1;
    }

    if (duplicateCount > 0) {
        printf("Numbers occurring more than once: ");
        for (int i = 0; i < duplicateCount; i++) {
            printf("%d ", duplicates[i]);
        }
        printf("\n");
    } else {
        printf("No duplicates found.\n");
    }

    return 0;
}
