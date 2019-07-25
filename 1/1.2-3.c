#include <math.h>
#include <stdio.h>

int calc() {
    int n = 2;
    while(100 * n * n > pow(2.0, n))
        ++n;
    return n;
}

int main() {
    printf("%d\n", calc());
    return 0;
}
