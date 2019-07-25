#include <stdio.h>

#include "../commom/tools.h"

void InsertionSort(int *A, int n) {
    for (int i = 1; i < n; ++i) {
        int key = A[i];
        int j = i - 1;
        for (; j >= 0; --j)
            if (A[j] > key)
                A[j + 1] = A[j];
            else
                break;
        A[j + 1] = key;
    }
}

int main() {
    int A[] = {3, 5, 3, 7, 3, 34, 8, 57, 34, 95, 46};
    int n = GetArrLen(A);
    ShowArr(A, n);
    InsertionSort(A, n);
    ShowArr(A, n);
    return 0;
}
