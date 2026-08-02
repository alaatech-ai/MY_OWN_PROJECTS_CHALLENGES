#include<stdio.h>
int main(){
    int A[]= {2,3,4,5,6};
    int *p = A;
    for(int i=0; i<5; i++){
        printf("index %d is: %d\n", i, *(p+i));
    }
    
    return 0;
}
