#include<stdio.h>
#include<stdlib.h>
int main(){
int tasks, i;
char **p;
printf("how much tasks do u wanna enter?\n");
scanf("%d", &tasks);
p = (char **)malloc( tasks * sizeof(char*));
for(i=0; i<tasks; i++){
p[i]= (char*)malloc(tasks *sizeof(char));
printf("enter tasks:\n");
scanf(" %s", p[i]);
}
printf("ur tasks are:\n");
for(i=0; i<tasks; i++){
    printf("To do : %s\n", p[i]);
}
free(p);
return 0;
}