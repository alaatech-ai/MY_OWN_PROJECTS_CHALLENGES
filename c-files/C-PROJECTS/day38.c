#include <stdio.h>

int main() {
    int A[5];
    
    for (int i = 0; i < 5; i++) {
        printf("enter 5 nbs:\n");
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}
