#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork()) {
        printf("I'm the parent, my PID: %d\n", getpid());
    } else {
        printf("I'm the child, my PID: %d\n", getpid());
    }
    return 0;
}
