#include <stdio.h>
#include <windows.h>

int equal_divisors(int n) {
    int count = 0;
    for (int r = 1; r < n; r++) {
        if (n % r == 0) {
            int m = (n / r) - 1;
            if (m > 0 && n % m == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("������ ���������� ����� n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("����� ������� ���� � ������� 1 < n < 150\n");
        return 1;
    }

    int result = equal_divisors(n);
    printf("ʳ������ ����� ������� ����� %d: %d\n", n, result);

    return 0;
}
