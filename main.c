#include <stdio.h>
#include <windows.h>

long long countNumbers(int p) {
    if (p == 1) return 2;
    if (p == 2) return 4;


    long long dp[p+1][4];


    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[2][3] = 1;

    for (int i = 3; i <= p; i++) {
        dp[i][0] = dp[i-1][1] + dp[i-1][3];
        dp[i][1] = dp[i-1][0] + dp[i-1][2];
        dp[i][2] = dp[i-1][0];
        dp[i][3] = dp[i-1][1];
    }

    return dp[p][0] + dp[p][1] + dp[p][2] + dp[p][3];
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int p;
    printf("Введіть кількість розрядів: ");
    scanf("%d", &p);

    printf("Кількість чисел із %d розрядів: %lld\n", p, countNumbers(p));
    return 0;
}
