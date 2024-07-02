#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double t1, t2, t3;
    printf("Введіть три значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double total_rate = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double time_needed = 1.0 / total_rate;

    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time_needed);

    return 0;
}
