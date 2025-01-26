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
{   int A[1000],i=0,j;
    node *head=NULL;
    insert_at_begin(&head,10);
    insert_at_begin(&head,20);
    insert_at_begin(&head,30);
    insert_at_begin(&head,40);
    node *temp=head;
    while(temp!=NULL)
    {
        
        A[i]=temp->data;
        temp=temp->next;
        i++;
    } 
    for(j=0;j<=i;j++){
        printf("%d ",A[j]);
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





