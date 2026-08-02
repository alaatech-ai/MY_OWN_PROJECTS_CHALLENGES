#include <stdio.h>

int Search(int arr[], int size, int nb) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == nb) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int m;
    int arr[] = {1, 5, 7, 3, 20, 50, 25};
    
    printf("enter a nb to search for:\n");
    scanf("%d", &m);
    
    int result = Search(arr, 7, m);
    
    if (result == 1) {
        printf("found\n");
    } else {
        printf("not found\n");
    }
    
    return 0;
}
