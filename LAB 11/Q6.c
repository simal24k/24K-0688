#include <stdio.h>

struct Location {
    char city[20];
    int postal_code;
};

struct Worker {
    char designation[20];
    char employee_id[20];
    float income;
    struct Location location;
} worker, temp_worker;

int main() {
    FILE *file_pointer;
    file_pointer = fopen("employee_data.bin", "wb");

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Worker %d:\n", i + 1);
        printf("Designation: ");
        scanf("%s", worker.designation);
        printf("Worker ID: ");
        scanf("%s", worker.employee_id);
        printf("Income: ");
        scanf("%f", &worker.income);
        printf("City: ");
        scanf("%s", worker.location.city);
        printf("Postal Code: ");
        scanf("%d", &worker.location.postal_code);
        printf("\n");
        fwrite(&worker, sizeof(struct Worker), 1, file_pointer);
    }
    fclose(file_pointer);

    file_pointer = fopen("employee_data.bin", "rb");
    printf("Printing Worker Information:\n");
    for (int i = 0; i < 3; i++) {
        fread(&temp_worker, sizeof(struct Worker), 1, file_pointer);

        printf("Designation: %s\n", temp_worker.designation);
        printf("Worker ID: %s\n", temp_worker.employee_id);
        printf("Income: %.2f\n", temp_worker.income);
        printf("City: %s\n", temp_worker.location.city);
        printf("Postal Code: %d\n", temp_worker.location.postal_code);
        printf("\n");
    }
    fclose(file_pointer);

    return 0;
}
