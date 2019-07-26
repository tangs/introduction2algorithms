#include <stdio.h>
#include "../commom/tools.h"

void InsertionSort(int *a, int n) {
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
}

int main() {
    int a[] = {31, 41, 59, 26, 41, 58};
    int n = GetArrLen(a);
    ShowArr(a, n);
    InsertionSort(a, n);
    ShowArr(a, n);
    return 0;
}
