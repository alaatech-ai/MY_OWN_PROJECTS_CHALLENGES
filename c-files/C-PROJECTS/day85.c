#include<stdio.h>
int alternatingsum (int n){
int sum =0;
int i =1;
while(i<=n){
    if(i%2!=0){
        sum += i;
    }
    else{
        sum -=i;
    }
i++;

} return sum;
}
int main(){
    int n;
    printf("enter an integer nb:\n");
    scanf(" %d", &n);
    int s = alternatingsum(n);
    printf(" the alternating sum is:%d\n", s);
    return 0;
}