#include <stdio.h>

int main() {
    int a[6] = {
        1,
        3,
        2,
        4,
        5
    };
    int n = sizeof(a) / sizeof(a[0]);
    int pos = 2;
    int val = 7;
    printf("original array\n");
    traverse(a, n);
    insert(a, pos, val, n);
    
}

void traverse(int * a, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);

    }
    printf("\n");
}

void insert(int * a, int pos, int val, int n) {

    for (int i = n; i > pos-1; i--) {

        a[i] = a[i - 1];
    }
    a[pos] = val;
    printf("\nafter addition\n");
    traverse(a, n);
}

