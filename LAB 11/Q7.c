#include <stdio.h> 

struct Organization {
    char org_name[30];
    int established_year;
    char *divisions[5];
};

int main() {
    struct Organization org = {"Innovatech", 2010, {"Development", "HR", "Accounting", "Support", "Operations"}};

    printf("Organization Name: %s\n", org.org_name);
    printf("Year Established: %d\n", org.established_year);
    for (int i = 0; i < 5; i++) {
        printf("Division %d: %s\n", i + 1, org.divisions[i]);
    }

    return 0;
}
