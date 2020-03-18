#include <stdio.h>

int ack(int m, int n);

int main() {
    printf("lets go...");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Ackermann: %d, %d = %d", i, j, ack(i, j));
        }
    }
    return 0;
}

int ack(int m, int n) {
    if (m == 0) return n + 1;
    else if (m > 0 && n == 0) return ack(m - 1, 1);
    else return ack(m - 1, ack(m, n - 1));
}
