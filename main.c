#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double t1, t2, t3;
    printf("������ ��� ��������:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double total_rate = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double time_needed = 1.0 / total_rate;

    printf("���, ���������� ��� �'������ ������: %.2f �����\n", time_needed);

    return 0;
}
