#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int distance = y - x;
    int step = 1, steps = 0, position = 0;


    while (position < distance) {
        steps++;
        position += step;
        if (position >= distance) break;
        steps++;
        position += step;
        if (position >= distance) break;
        step++;
    }

    return steps;
}

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("Invalid input: x should be less than or equal to y\n");
        return 1;
    }

    int result = minSteps(x, y);
    printf("Minimum number of steps: %d\n", result);

    return 0;
}
