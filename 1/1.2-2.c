#include <math.h>
#include <stdio.h>

int calc() {
    int n = 2;
    while (8.0 * n * n < 64.0 * n * log2(n))
        ++n;
    return n;
}

int main() {
    printf("%d\n", calc());
    return 0;
}
