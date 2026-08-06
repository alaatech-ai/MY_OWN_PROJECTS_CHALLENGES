#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("enter a size for ur array:\n");
	scanf(" %d", &n);
	 
	int *p = (int *) malloc (n * sizeof(int));
	printf("input ur nbrs:\n");
	for(int i=0; i<n; i++){
		scanf(" %d", &p[i]);
	}
	
	int del;
	printf(" enter ur nb u want to delete:\n");
	scanf(" %d", &del);
	
	for( int i=0; i<n; i++){
		if(p[i]==del){
			int temp = p[n-1];
			p[n-1] = p[i];
			p[i] = temp;
			break;
		}
	}
    
    n--;
    p = (int * ) realloc (p, n * sizeof(int));
    
    printf(" new array:\n");
    for( int i =0;  i<n; i++){
    	printf(" %d", p[i]);
	}
    
    free(p);
	
	
	
	
	
	
	return 0;
}
