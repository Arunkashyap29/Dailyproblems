#include <stdio.h>

int main() {
    int a = 5, b = 15, c = 25;
    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        if ((i % 2 == 0) && (i < a)) {
            sum += i * b;
        } else if ((i % 2 == 1) && (i > a && i < c)) {
            sum += i + a;
        } else if ((i % 2 == 0) && (i > a && i < c)) {
            sum += i - b;
        } else {
            sum += a + b + c;
        }
    }

    printf("The final value of sum is: %d\n", sum);
    return 0;
}