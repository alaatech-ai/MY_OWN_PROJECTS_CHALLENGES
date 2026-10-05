#include<stdio.h>
 long int fibonacci (unsigned long int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
 }
 void main(){
    int n;
    printf("enter a nb:\n");
    scanf(" %d", &n);
    long int fibo = fibonacci(n);
    printf("the fibonacci series is:%d\n", fibo);
 }