#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char title[30];
    struct Date event_date;
    char venue[100];
};

int main() {
    int eventCount;
    struct Event eventList[50];

    printf("Enter the number of events: ");
    scanf("%d", &eventCount);

    for (int i = 0; i < eventCount; i++) {
        printf("\nEnter details for event %d:\n", i + 1);
        printf("Event Title: ");
        scanf("%s", eventList[i].title);
        printf("Date (dd mm yyyy): ");
        scanf("%d %d %d", 
              &eventList[i].event_date.day, 
              &eventList[i].event_date.month, 
              &eventList[i].event_date.year);
        printf("Venue: ");
        scanf(" %[^\n]", eventList[i].venue);
    }

    printf("\nEvent Details:\n");
    for (int i = 0; i < eventCount; i++) {
        printf("\nEvent %d Details:\n", i + 1);
        printf("Title: %s\n", eventList[i].title);
        printf("Date: %02d/%02d/%04d\n", 
               eventList[i].event_date.day, 
               eventList[i].event_date.month, 
               eventList[i].event_date.year);
        printf("Venue: %s\n", eventList[i].venue);
    }

    return 0;
}
