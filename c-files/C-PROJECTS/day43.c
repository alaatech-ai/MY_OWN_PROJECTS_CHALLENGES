#include <stdio.h>

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int A[100], n;
    printf("determine a size for ur array:\n");
    scanf("%d", &n);
    
    printf("enter ur nbrs:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    reverse(A, n);
    printf("ur reverse array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}
