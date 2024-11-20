#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char location[50];
    int days;
    float price;
    int availableSeats;
} TravelPackage;

void showTravelPackages(TravelPackage pkgList[], int totalPackages)
{
    printf("\nAvailable Travel Packages:\n");
    for (int index = 0; index < totalPackages; index++)
    {
        printf("Package %d:\n", index + 1);
        printf("  > Name: %s\n", pkgList[index].name);
        printf("  Location: %s\n", pkgList[index].location);
        printf("  Duration: %d days\n", pkgList[index].days);
        printf("  Price: $%.2f\n", pkgList[index].price);
        printf("  Seats Available: %d\n\n", pkgList[index].availableSeats);
    }
}

void reservePackage(TravelPackage pkgList[], int totalPackages)
{
    char selectedPackage[50];
    printf("\nEnter the name of the package you wish to book: ");
    fgets(selectedPackage, sizeof(selectedPackage), stdin);
    selectedPackage[strcspn(selectedPackage, "\n")] = 0;

    int found = 0;
    for (int index = 0; index < totalPackages; index++)
    {
        if (strcmp(pkgList[index].name, selectedPackage) == 0)
        {
            found = 1;
            if (pkgList[index].availableSeats > 0)
            {
                pkgList[index].availableSeats--;
                printf("\nBooking confirmed for package: %s\n", pkgList[index].name);
            }
            else
            {
                printf("\nSorry, no seats available for package: %s\n", pkgList[index].name);
            }
            break;
        }
    }

    if (!found)
    {
        printf("\nPackage not found.\n");
    }
}

int main()
{
    TravelPackage travelPackages[999];

    int totalTravelPackages;
    printf("How many travel packages are you entering? ");
    scanf("%d", &totalTravelPackages);
    getchar();

    for (int index = 0; index < totalTravelPackages; index++)
    {
        printf("\nEnter details for package %d:\n", index + 1);

        printf("Package Name: ");
        fgets(travelPackages[index].name, sizeof(travelPackages[index].name), stdin);
        travelPackages[index].name[strcspn(travelPackages[index].name, "\n")] = 0;

        printf("Location: ");
        fgets(travelPackages[index].location, sizeof(travelPackages[index].location), stdin);
        travelPackages[index].location[strcspn(travelPackages[index].location, "\n")] = 0;

        printf("Duration (in days): ");
        scanf("%d", &travelPackages[index].days);
        getchar();

        printf("Price: ");
        scanf("%f", &travelPackages[index].price);
        getchar();

        printf("Seats Available: ");
        scanf("%d", &travelPackages[index].availableSeats);
        getchar();
    }

    printf("\nWelcome to the Travel Booking System!\n");
    showTravelPackages(travelPackages, totalTravelPackages);
    reservePackage(travelPackages, totalTravelPackages);

    printf("\nUpdated Package List After Booking:\n");
    showTravelPackages(travelPackages, totalTravelPackages);

    return 0;
}
