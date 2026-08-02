#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subs(int a, int b) {
    return a - b;
}

int main() {
    int i, j;
    printf("enter 2 nbs:\n");
    scanf("%d %d", &i, &j);
    
    int result = add(i, j);
    int res = subs(i, j);
    
    printf("Result: %d\n", result);
    printf("Result subs: %d\n", res);
    
    return 0;
}
