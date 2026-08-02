#include <stdio.h>

int main() {
    int i, j, k, m;
    
    do {
        printf("enter n (4<=n<=15):\n");
        scanf("%d", &m);
    } while (m < 4 || m > 15);
    
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (m + i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
