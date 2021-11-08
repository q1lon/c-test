#include <stdio.h>

int fib(int N);

int main() {
    int n = 20;
    printf("nnnnn:%d\n", fib(n));
}

int fib(int N) {
    if (N == 1 || N == 2)
        return 1;
    return fib(N - 1) + fib(N - 2);
}