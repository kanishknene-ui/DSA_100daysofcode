#include<stdio.h>
#include<stdlib.h>
struct node{
    int a;
    struct node*next;
};
 struct node*head=NULL;
int main(){
struct node*first=(struct node*)malloc(sizeof(struct node));
struct node*second=(struct node*)malloc(sizeof(struct node));
struct node*third=(struct node*)malloc(sizeof(struct node));
struct node*fourth=(struct node*)malloc(sizeof(struct node));
struct node*fifth=(struct node*)malloc(sizeof(struct node));

first->a=10;
first -> next = second;
second->a=20;
second->next=third;
third->a=30;
third->next=fourth;
fourth->a=40;
fourth->next=fifth;
fifth->a=50;
fifth->next=first;

struct node* head=first;
struct node* t=head;

do{
    printf("%d ",t->a);
    t=t->next;  
}
while(t!=head);
return 0;
}