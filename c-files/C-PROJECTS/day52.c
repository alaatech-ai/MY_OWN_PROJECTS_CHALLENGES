#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter numbers:\n");
    scanf("%d", &n);
    
    int *p = (int *) malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }
    
    for(int i = 0; i < n / 2; i++) {
        int temp = *(p + i);
        *(p + i) = *(p + n - 1 - i);
        *(p + n - 1 - i) = temp;
    }
    
    printf("reversed arr:\n");
    for(int i = 0; i < n; i++) {
        printf("%d", *(p + i));
    }
    printf("\n");
    
    free(p);
    
    return 0;
}
