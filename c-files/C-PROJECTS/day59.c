#include<stdio.h>
void check_temp(float temp){
    if(temp == 0 || temp <0){
        printf("error!\n");
    }
    else if(1<temp<50){
        printf("cool!\n");
    }
    else if(temp >=50 && temp<=80){
        printf("warning!\n");
    }
    else{
        printf("overhating!\n");
    }
}
int main(){
float tmp;
char  choice;
do{
printf("enter ur current temp:\n");
scanf("%f", &tmp);
check_temp(tmp);
printf("do u want to check anothe temp?\n");
scanf(" %c", &choice);
} while(choice == 'y' || choice == 'Y');


return 0;
}
