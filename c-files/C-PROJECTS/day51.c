#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter nr nmber:\n");
    scanf("%d", &n);
    
    int *p = (int *) malloc(n * sizeof(int));
    
    return 0;
}
