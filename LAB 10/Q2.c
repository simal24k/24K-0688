#include <stdio.h>
#include <math.h>

typedef struct
{
    int xCoord;
    int yCoord;
} Coordinates;

float calcdist(Coordinates pointA, Coordinates pointB)
{
    return sqrt(pow(pointB.xCoord - pointA.xCoord, 2) + pow(pointB.yCoord - pointA.yCoord, 2));
}

int inrec(Coordinates testPoint, Coordinates rectTopLeft, Coordinates rectBottomRight)
{
    return (testPoint.xCoord >= rectTopLeft.xCoord && testPoint.xCoord <= rectBottomRight.xCoord &&
            testPoint.yCoord <= rectTopLeft.yCoord && testPoint.yCoord >= rectBottomRight.yCoord);
}

int main()
{
    Coordinates point1, point2, pointToTest, rectangleTopLeft, rectangleBottomRight;

    printf("Enter coordinates of the first point (x y): ");
    scanf("%d %d", &point1.xCoord, &point1.yCoord);

    printf("Enter coordinates of the second point (x y): ");
    scanf("%d %d", &point2.xCoord, &point2.yCoord);

    float dist = calcdist(point1, point2);
    printf("Distance between points: %.2f\n", dist);

    printf("Enter top-left corner of the rectangle (x y): ");
    scanf("%d %d", &rectangleTopLeft.xCoord, &rectangleTopLeft.yCoord);

    printf("Enter bottom-right corner of the rectangle (x y): ");
    scanf("%d %d", &rectangleBottomRight.xCoord, &rectangleBottomRight.yCoord);

    printf("Enter point to test (x y): ");
    scanf("%d %d", &pointToTest.xCoord, &pointToTest.yCoord);

    if (inrec(pointToTest, rectangleTopLeft, rectangleBottomRight))
    {
        printf("The point is inside the rectangle.\n");
    }
    else
    {
        printf("The point is outside the rectangle.\n");
    }

    return 0;
}
