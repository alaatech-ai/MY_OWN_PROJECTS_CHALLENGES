#include <stdio.h>
#include <math.h>
int quadratic(double a, double b, double c, double *x1, double *x2) {
    double d = b*b - 4*a*c;
    if (d < 0) 
      return 0;
    *x1 = (-b + sqrt(d)) / (2*a);
    *x2 = (-b - sqrt(d)) / (2*a);
    if (d == 0) 
      return 1;
    return 2;
}
int main() {
    double a, b, c, x1, x2;
    printf("Enter a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0){
       return 1;
    }
    int roots = quadratic(a, b, c, &x1, &x2);
    if (roots == 2) {
        printf("Two solutions: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
else if (roots == 1) {
        printf("One solution: x = %.2lf\n", x1);
        }
    else {
    printf("No real solution\n");
}

    return 0;
}