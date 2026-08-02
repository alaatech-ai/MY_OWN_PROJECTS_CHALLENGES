#include <stdio.h>

void addfive(int *p) {
    *p += 5;
}

int main() {
    int age = 19;
    addfive(&age);
    printf("after: %d\n", age);
    
    return 0;
}
