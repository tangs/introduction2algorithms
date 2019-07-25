#include <math.h>
#include <stdio.h>

int calcMax() {
    int n = 2;
    while (8 * n * n < 64 * n * log2(n))
        ++n;
    return n;
}

int main() {
    printf("%d\n", calcMax());
    return 0;
}
