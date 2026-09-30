#include<stdio.h>
int fact(int n){
    int x=1;
    int i;
    for(i=2; i<=n; i++){
        x*=i;}
        return x;
}
void summation(int n){
    double u;
    if(n==1 || n==2){
        u= (double)(1.0);
    }
    double k=1, sum =0;
    int i;
    for(i=3; i<=n; i++){
        sum = k+ (k/fact(i-2));
        k=sum;
    }
    printf("u_%d=%.2lf\n", n, k);
}
int main(){
    int x;
    printf("enter an integer:\n");
    scanf(" %d", &x);
    summation(x);
    return 0;
}