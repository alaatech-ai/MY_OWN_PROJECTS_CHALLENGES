#include <stdio.h>
#include <stdlib.h>

int main() {
    int candles[] = {1, 1, 1, 1, 1};
    int *p = candles;

    for(int i = 0; i < 5; i++) {
        *(p + i) = 0;
    }

    printf("Birthday candles blown out! Status: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
