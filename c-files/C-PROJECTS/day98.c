#include<stdio.h>
#include<stdlib.h>
//define node
struct node{
    int data;
    struct node *next;
};
//changing value of a to 0 by ptrs
void setzero(int *x){
   *x = 0;
}

//changing value of b to b+1 by ptrs
void addone(int *y){
    *y += 1;           //*y = *y + 1
}
//fct to insert head
struct node *inserthead(struct node *head, int value){
    struct node *n = malloc(sizeof(struct node));
    n ->data = value;
    n -> next = head;
    return n;
}
int sum(struct node *head){
    int total = 0;
    struct node *cur = head; //list bi ballech men head
    while(cur != NULL){
        total += cur->data; //zid aal total
        cur =cur-> next; // yalle baada
    }
    return total;

}
int countnode(struct node *head){
    int count = 0;
    struct node *cur = head; //list bi ballech men head
    while(cur != NULL){
       count += 1;       //3eddele aw fina nktob: count++;
        cur =cur-> next; // yalle baada
    }
    return count;

}


int main(){
    int a =5; 
     setzero(&a);            // calling the address of a (variable u wanna change)
     printf(" a to zero: %d\n", a);     // output = 0
    
    int b = 6;                  // calling the address of b (variable u wanna change)
    addone(&b);
    printf("b + 1 :%d\n", b);     //output = 7

    //insert head
    struct node *head = NULL;
    head = inserthead(head, 20);
    head = inserthead(head, 10);
    head = inserthead(head, 30);
    struct node *current = head;
    while(current != NULL){
        printf("%d\n", current -> data);
        current = current -> next ;
    }
     printf("sum:%d\n", sum(head));
     printf("count:%d\n", countnode(head));
  
    return 0;
} 

