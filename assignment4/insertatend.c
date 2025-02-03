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
int main(){
    node *head=NULL;
    insert_at_end(&head,10);
    insert_at_end(&head,20);
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