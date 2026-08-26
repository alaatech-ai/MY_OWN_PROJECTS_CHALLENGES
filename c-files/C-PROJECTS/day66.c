#include<stdio.h>
#include<limits.h>

int reverse(int x){
int reversed =0;
 while(x!=0){
    int digit = x %10;
    if(reversed> INT_MAX/10 || reversed < INT_MIN /10){
        return 0;
    }
    reversed = reversed *10 + digit;
    x = x/10;
 }
 return reversed;
  }

int main(){
 int numb;
 printf("enter a nb:\n");
 scanf(" %d", &numb);
 int rev = reverse(numb);
printf(" reversed: %d\n", rev);
 return 0;
}