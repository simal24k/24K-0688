#include <stdio.h>

const int TEMPERATURE_THRESHOLD = 30;

int countExceedingTemperatures(int currentTemperature)
{
    static int exceedCount = 0;

    if (currentTemperature > TEMPERATURE_THRESHOLD)
    {
        exceedCount++;
    }

    return exceedCount;
}

int main()
{
    int numberOfReadings;
    int exceedCountTotal = 0;

    printf("Enter the number of temperature readings: ");
    scanf("%d", &numberOfReadings);

    for (int index = 0; index < numberOfReadings; index++)
    {
        int temperatureInput;
        printf("Enter temperature %d: ", index + 1);
        scanf("%d", &temperatureInput);
        
        exceedCountTotal = countExceedingTemperatures(temperatureInput);
    }

    printf("Total number of temperatures exceeding %d: %d\n", TEMPERATURE_THRESHOLD, exceedCountTotal);

    return 0;
}
