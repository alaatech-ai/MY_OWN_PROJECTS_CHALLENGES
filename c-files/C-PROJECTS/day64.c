#include<stdio.h>
#include<string.h>
int main(){
char usern[20], passn[20], name[20], pass[20];
printf("create username:\n");
scanf("%s", usern);
printf("create a password:\n");
scanf("%s", passn);

int ctr =0;
while(ctr <3){
printf("enter ur name and password :\n");
scanf("%s %s", name, pass);

if(strcmp(name, usern)==0 && strcmp(pass, passn)==0){
    printf("wlc!\n");
    break;
}
else{
    ctr++;
    printf("plz try again\n");
}}
if(ctr >= 3){
    printf(" warning! system locked\n");

}
  return 0;
}