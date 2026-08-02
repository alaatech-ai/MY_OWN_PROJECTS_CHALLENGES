#include <stdio.h>

int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int A[5];
    printf("enter 5 nbs:\n");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    
    int res = Max(A, 5);
    printf("the max is: %d\n", res);
    
    return 0;
}
