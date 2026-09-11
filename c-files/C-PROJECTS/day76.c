#include<stdio.h>
void display(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        printf(" %d\n", arr[i]);
    }
}
void store(int arr[], int size){
    int i;
    for(i=0; i<size; i++) {
        scanf(" %d", &arr[i]);
    }
}
int replaceandfind(int arr[], int size, int oldval, int newval){
    int count = 0;
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==oldval){
               arr[i] =newval;
               count++;
        }
    }
    return count;
}
int main(){
 int size;
 printf("enter ur size:\n");
 scanf(" %d", &size);
 int arr[size];
 store(arr, size);
int n,j;
printf("enter the nb of replacments\n");
scanf(" %d", &n);
int ttl = 0;
for(j=0; j<n; j++){

 int oldval, newval;
 printf("enter ur oldval and new val:\n");
 scanf(" %d %d", &oldval, &newval);

 int total = replaceandfind(arr, size, oldval, newval);
ttl += total;}
 display(arr, size);
 printf("nb of replaces: %d\n", ttl);
return 0;
}