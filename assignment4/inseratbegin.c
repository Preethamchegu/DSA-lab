#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

 void insert_at_begin(node **head,int num){
    node *new=(node*)malloc(sizeof(node));
    if(*head==NULL){
        new->data=num;
        new->prev=NULL;
        new->next=NULL;
        *head=new;
    }
    else if(*head!=NULL){
        new->data=num;
        new->prev=NULL;
        new->next=*head;
        (*head)->prev=new;
        *head=new;
    }


}
int main(){
    node *head=NULL;
    insert_at_begin(&head,10);
    insert_at_begin(&head,20);
    node *temp=head;
    while(temp!=NULL){
        printf("%p|%d|%p->",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
    temp=head;
        while(temp!=NULL){
            head=head->next;
            free(temp);
            temp=head;
        }

    
}   