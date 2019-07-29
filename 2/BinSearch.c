#include <stdio.h>

#include "../common/tools.h"

int BinarySearch(int *A, int n, int v) {
    int s = 0;
    int e = n - 1;
    while (1) {
        int idx = (s + e) / 2;
        if (A[idx] == v)
            return idx;
        if (A[idx] > v)
            e = idx - 1;
        else
            s = idx + 1;
        if (s > e)
            return -1;
    }
}

int BinarySearchRecursion(int *A, int n, int v, int s, int e) {
    if (s > e)
        return -1;
    int idx = (s + e) / 2;
    if (A[idx] == v)
        return idx;
    if (A[idx] > v) 
        e = idx - 1;
    else
        s = idx + 1;
    return BinarySearchRecursion(A, n, v, s, e);
}

int main() {
    int a[] = {3, 5, 7, 9, 11, 13, 29, 50, 80, 122};
    int n = GetArrLen(a);
    printf("%d %d %d\n", BinarySearch(a, n, 2), BinarySearchRecursion(a, n, 2, 0, n - 1), BinarySearch(a, n, 2) == BinarySearchRecursion(a, n, 2, 0, n - 1));
    printf("%d %d %d\n", BinarySearch(a, n, 3), BinarySearchRecursion(a, n, 3, 0, n - 1), BinarySearch(a, n, 3) == BinarySearchRecursion(a, n, 3, 0, n - 1));
    printf("%d %d %d\n", BinarySearch(a, n, 5), BinarySearchRecursion(a, n, 5, 0, n - 1), BinarySearch(a, n, 5) == BinarySearchRecursion(a, n, 5, 0, n - 1));
    printf("%d %d %d\n", BinarySearch(a, n, 7), BinarySearchRecursion(a, n, 7, 0, n - 1), BinarySearch(a, n, 7) == BinarySearchRecursion(a, n, 7, 0, n - 1));
    printf("%d %d %d\n", BinarySearch(a, n, 29), BinarySearchRecursion(a, n, 29, 0, n - 1), BinarySearch(a, n, 29) == BinarySearchRecursion(a, n, 29, 0, n - 1));
    printf("%d %d %d\n", BinarySearch(a, n, 99), BinarySearchRecursion(a, n, 99, 0, n - 1), BinarySearch(a, n, 99) == BinarySearchRecursion(a, n, 99, 0, n - 1));
    printf("%d %d %d\n", BinarySearch(a, n, 122), BinarySearchRecursion(a, n, 122, 0, n - 1), BinarySearch(a, n, 122) == BinarySearchRecursion(a, n, 122, 0, n - 1));
    return 0;
}
