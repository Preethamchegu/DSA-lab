#include<stdio.h> 
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void freeinsert_in_linkedlist(node *head){
    node *temp=head;
    while(temp!=NULL){
        head=head->next;
        free(temp);
        temp=head;
    }

}

void insert_in_linkedlist(node**,int A[5]);    
int main()
{   int A[]={1,2,3,4,5};
    node *head=NULL;
    insert_in_linkedlist(&head,A);
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;      
    } 
    
    freeinsert_in_linkedlist(head);
}
 void insert_in_linkedlist(node**head,int A[5]){
    int i=0;
    while(i<5){
        node *new=(node*)malloc(sizeof(node));
        if(*head==NULL)
        {
            new->data=A[5-i-1];
            new->next=NULL;
            *head=new;
            i++;
        }
        else{
            new->data=A[5-i-1];
            new->next=*head;
            *head=new;
            i++;
        }

    }

    

}
