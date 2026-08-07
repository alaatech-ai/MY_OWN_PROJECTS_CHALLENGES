#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int i, j;
 	printf("input the nb of rows and col:\n");
 	scanf(" %d %d", &i, &j);
 	int **p = (int **) malloc (i*sizeof(int*));
 	
 	for( int k=0; k<i; k++){
 		p[i] = (int *) malloc (j * sizeof(int));
	 }
	 
	 printf(" enter ur 2d array:\n");
	 for(int y=0; y<i; y++){
	 	for(int z=0; z<j; z++){
	 		scanf("%d", &p[i][j]);
		 }
	 }
	 
	 printf("ur 2d array is:\n");
	 for(int y=0; y<i; y++){
	 	for(int z=0; z<j; z++){
	 		printf("%d", p[i][j]);
		 }
		 printf("\n");
	 }
	 
	 for(int k=0; k<i; k++){
	 	free(p[k]);
	 }
	 free(p);
	 
	 
	 
	 
	 return 0;
 }
