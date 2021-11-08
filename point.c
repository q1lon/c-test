#include <stdio.h>

void increment(int *p);

int main() {
    int *x;
    int i = 1;
    x = &i;
    //   increment(&x);
    printf("%d\n", *x);
}

void increment(int *p) {
    *p = *p + 1;
}
