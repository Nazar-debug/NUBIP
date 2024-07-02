#include <stdio.h>
#include <windows.h>

// Функція для обчислення НСД двох чисел
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для обчислення НСК двох чисел
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int p;
    printf("Введіть кількість чисел: \n");
    scanf("%d", &p);

    int numbers[20];
    printf("Введіть числа: ");
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}
