#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    
    for(int i = 0; i < 5; i++) {
        *(p + i) += 10;
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    
    return 0;
}
