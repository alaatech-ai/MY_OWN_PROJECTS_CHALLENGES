#include<stdio.h>
void reverse(int *arr, int size){
    int  temp;
    int *start=arr;
    int *end = arr+ size-1;
    while(start<end){
        temp = *end;
        *end = *start;
        *start =temp;
        start++;
        end--;
    }
}

int sumarr(int *arr, int size){
    int sum =0;
    int i;
    for(i=0; i<size; i++){
        sum += *(arr+i);
    
    }
    return sum;
}
int main(){
    int arr[]={5, 2 ,3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, size);
    int s = sumarr(arr, size);
    int i;
    for(i=0; i<size; i++){
     printf("%d\n", arr[i]);
 }
    printf("the sum is:%d\n", s);
    return 0;
}