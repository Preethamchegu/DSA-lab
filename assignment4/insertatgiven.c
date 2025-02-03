#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

 void insert_at_end(node **head,int num){
    node *new=(node*)malloc(sizeof(node));
    node *prev;
    new->data=num;
    if(*head==NULL){
        new->prev=NULL;
        new->next=NULL;
        *head=new;
        prev=*head;
    }
    else if(*head!=NULL){
        new->prev=prev;
        new->next=NULL;
        prev->next=new;
        prev=prev->next;
    }
}
 void insert_after( node **head,int num,int put){
    node *temp=*head;
    node *new=(node*)malloc(sizeof(node));
    while(temp->data!=num){
        temp=temp->next;
    }
        new->data=put;
        new->prev=temp;
        new->next=temp->next;
        temp->next->prev=new;
        temp->next=new;
        
 }   

int main(){
    node *head=NULL;
    insert_at_end(&head,10);
    insert_at_end(&head,20);
    insert_at_end(&head,40);
    insert_at_end(&head,50);
    insert_at_end(&head,60);
    insert_after(&head,20,30);   
    node *temp=head;
    while(temp!=NULL){
        printf("%p|%d|%p->",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
    printf("NULL");


    temp=head;
    while(temp!=NULL){
        head=head->next;
        free(temp);
        temp=head;
    }
     

    
}   