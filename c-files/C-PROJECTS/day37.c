#include <stdio.h>

int main() {
    int m = 0;
    int nb = 45;
    
    while (m != nb) {
        printf("enter a nb btwn 1 and 100:\n");
        scanf("%d", &m);
        
        if (m > nb) {
            printf("ur nb is higher than the secret nb\n");
        } else if (m < nb) {
            printf("ur nb is lower than the secret nb\n");
        } else {
            printf("congrats!\n");
        }
    }
    
    return 0;
}
