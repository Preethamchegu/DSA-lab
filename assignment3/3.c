#include<stdio.h> 
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void freeinsert_at_begin(node *head){
    node *temp=head;
    while(temp!=NULL){
        head=head->next;
        free(temp);
        temp=head;
    }

}

void insert_at_begin(node**,int);    
int main()
{   
    node *head=NULL;
    insert_at_begin(&head,10);
    insert_at_begin(&head,20);
    insert_at_begin(&head,30);
    insert_at_begin(&head,40);
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d|%u->",temp->data,temp->next);
        temp=temp->next;
    }
    freeinsert_at_begin(head);
}
 void insert_at_begin( node**head,int num){
    node *new=(node*)malloc(sizeof(node));
    new->data=num;
    if(*head==NULL){
        new->next=NULL;
        *head=new;
    }
    else{
        new->next=*head;
        *head=new;
    }
    

}
