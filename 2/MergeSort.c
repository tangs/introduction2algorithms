#include <stdlib.h>

#include "../common/tools.h"

void Merge(int *A, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int* lArr = malloc(sizeof(int) * n1);
    int* rArr = malloc(sizeof(int) * n2);

    for (int i = 0; i < n1; ++i)
        lArr[i] = A[l + i];
    for (int i = 0; i < n2; ++i)
        rArr[i] = A[m + i + 1];
    
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (lArr[i] <= rArr[j])
            A[k++] = lArr[i++];
        else
            A[k++] = rArr[j++];
    }

    while (i < n1)
        A[k++] = lArr[i++];

    while (j < n2)
        A[k++] = rArr[j++];

    free(lArr);
    free(rArr);
}

void MergeSort(int *A, int s, int e) {
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    MergeSort(A, s, mid);
    MergeSort(A, mid + 1, e);
    Merge(A, s, mid, e);
}

int main() {
    int A[] = {3, 5, 3, 7, 3, 34, 8, 57, 34, 95, 46};
    int n = GetArrLen(A);
    ShowArr(A, n);
    MergeSort(A, 0, n - 1);
    ShowArr(A, n);
    return 0;
}