#include <stdio.h>


int countSequences(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;

    int mod = 12345;
    int a = 2, b = 4, c = 7;
    int result;

    for (int i = 4; i <= n; ++i) {
        result = (a + b + c) % mod;
        a = b;
        b = c;
        c = result;
    }

    return c;
}

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 10000) {
        printf("Invalid value of n. It must be 1 < n < 10000.\n");
        return 1;
    }

    int result = countSequences(n);
    printf("Number of desired sequences: %d\n", result);

    return 0;
}
