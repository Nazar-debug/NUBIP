#include <stdio.h>
#include <math.h>

// Function to calculate the number of intersection points
int countIntersectionPoints(double x1, double y1, double r1, double x2, double y2, double r2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // If the circles are identical
    if (distance == 0 && r1 == r2) {
        return -1; // Infinite intersections
    }

    // If the circles are too far apart or one circle is completely inside the other without touching
    if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        return 0; // No intersections
    }

    // If the circles touch at exactly one point
    if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        return 1; // One intersection
    }

    // If the circles intersect at two points
    return 2;
}

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    int result = countIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("Number of intersection points: %d\n", result);

    return 0;
}
