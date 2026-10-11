#include <stdio.h>

int nbofdigits(int N) {
    if (N < 10) {
        return 1;
    }
    return 1 + nbofdigits(N / 10);
}


int sumofdigits(int N) {
    if (N < 10) {
        return N;
    }
    return (N % 10) + sumofdigits(N / 10);
}


int ismultipleof9(int N) {
    int sum = sumofdigits(N);
    

    if (sum >= 10) {
        return ismultipleof9(sum);
    }
    
    return (sum == 9 || sum == 0);
}

int main() {
    int i;
    printf("Enter your number:\n");
    scanf("%d", &i);
    
    printf("Number of digits: %d\n", nbofdigits(i));
    printf("Sum of digits: %d\n", sumofdigits(i));
    
    int m = ismultipleof9(i);
    if (m) {
        printf("Result: %d (It is a multiple of 9)\n", m);
    } else {
        printf("Result: %d (It is NOT a multiple of 9)\n", m);
    }
    
    return 0;
}