#include<stdio.h>
int sumdigit(int n){
    int sum = 0;
    while(n!=0){
        sum+= n%10;
    
    }
    return sum;
}
 int reversenb(int n){
    int res = 0;
    while(n!=0){
        res = res*10 + n%10;
        n/=10;
    }
    return res;
 }

 int ispalindrom(int n){
    if(n== reversenb(n)){
        return 1;
    }
return 0;
 }

 int gcd( int a, int b){
    int i;
    int result =1;
    for(i=1; i<=a && i<=b; i++){
      if(a%i==0 && b%i==0){
        result = i;
      }
    }
    return result;
 }

 int main(){
    int x;
    printf("enter any positive integer(3 digits or more):\n");
    scanf(" %d", &x);
    int summation = sumdigit(x);
    printf(" sum of digits:%d\n", summation);
    int rev = reversenb(x);
    printf("reverse : %d\n", rev);
    int pali = ispalindrom(x);
    printf("if its palindrom he ll return 1, if its not(he ll return 0): %d\n", pali);
    int y,z;
    printf("enter another two positive integers:\n");
    scanf(" %d %d", &y, &z);
    int g = gcd(y, z); 
    printf(" gcd:%d\n", g);

return 0;

 }