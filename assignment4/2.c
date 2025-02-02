#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} node;

int main() 
{   int n,i,num;
    printf("enter no.of nodes:");
	scanf("%d",&n);
	node *prev;
	for(i=0;i<n;i++){
		node *new=(node*)malloc(sizeof(node));
		scanf("%d",&num);
		if(head == NULL){
			new->data=num;
			head=new;
			new->next=NULL;
            prev=new;
		}
		else{
			new->data=num;
			new->next=NULL;
			prev->next=new; 
            prev=prev->next;	
		}
	}
    printf("before removal:\n");
    node *temp=head;
        while(temp!=NULL)
        {
            printf("%d ->",temp->data);
            temp=temp->next;	
        }
        printf("NULL");
        node *move;
        node *move_previous;
        node *check=head;
        while(check!= NULL && check->next!=NULL){
            
                move_previous=check;
                move=check->next;
            
            while( move!=NULL){
                if(check->data==move->data)
                {
                    move_previous->next=move->next;
                    free(move);
                    move=move_previous->next;
                    
                }
                else{
                    move_previous=move;
                    move=move->next;
                }
            }
            check=check->next;	
        }
        printf("\nafter removal:\n");
        node *line=head;
        while(line!=NULL)
        {
            printf("%d->",line->data);
            line=line->next;	
        }
        printf("NULL");
        temp=head;
        while(temp!=NULL){
            head=head->next;
            free(temp);
            temp=head;
        }
        
        
        
        
        
        
        
        
        
        
}
