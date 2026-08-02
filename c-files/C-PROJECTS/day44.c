#include <stdio.h>

int main() {
    int age = 22;
    int *p = &age;
    
    printf("age: %d\n", age);
    printf("address: %p\n", (void*)p);
    printf("value using ptrs: %d\n", *p);
    
    return 0;
}
