#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

int checkLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getDaysInMonth(int month, int year)
{
    int daysInEachMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && checkLeapYear(year))
        return 29;

    return daysInEachMonth[month - 1];
}

int isDateValid(Date date)
{
    if (date.year < 1 || date.month < 1 || date.month > 12 || date.day < 1 || date.day > getDaysInMonth(date.month, date.year))
        return 0;

    return 1;
}

int calculateDaysBetweenDates(Date startDate, Date endDate)
{
    int totalDays = 0;
    while (startDate.year < endDate.year || (startDate.year == endDate.year && startDate.month < endDate.month) || (startDate.year == endDate.year && startDate.month == endDate.month && startDate.day < endDate.day))
    {
        startDate.day++;
        if (startDate.day > getDaysInMonth(startDate.month, startDate.year))
        {
            startDate.day = 1;
            startDate.month++;
            if (startDate.month > 12)
            {
                startDate.month = 1;
                startDate.year++;
            }
        }
        totalDays++;
    }
    return totalDays;
}

int getDayOfWeek(Date date)
{
    int month = date.month;
    int year = date.year;
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    return (date.day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
}

int main()
{
    Date dateOne, dateTwo;

    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &dateOne.day, &dateOne.month, &dateOne.year);

    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &dateTwo.day, &dateTwo.month, &dateTwo.year);

    if (!isDateValid(dateOne) || !isDateValid(dateTwo))
    {
        printf("One or both of the dates entered are invalid.\n");
        return 0;
    }

    printf("Total days between the two dates: %d\n", calculateDaysBetweenDates(dateOne, dateTwo));
    printf("Day of the week for the first date: %d\n", getDayOfWeek(dateOne));
    printf("Day of the week for the second date: %d\n", getDayOfWeek(dateTwo));

    return 0;
}
