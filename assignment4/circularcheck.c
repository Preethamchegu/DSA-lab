#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} node;

int main() 
{   int n,i,num,choice;
    printf("enter no.of nodes:");
	scanf("%d",&n);
    printf("enter no.s in your linked list:");
	node *head=NULL;
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
    printf("if you want to add loop  press 1 \n if you don't need loop press 0:");
    scanf("%d",&choice);
    if(choice==1){
        node *last=head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=head;

    }
    
    node *temp=head;
    node *check=head->next;
    int flag=0;
    while(check!=NULL&& flag==0){
        while(temp!=check ){ 
            if(check->next == NULL){
                printf("No loop");
                flag=1;
                break;
            }
            if(check->next == head){
                printf("there exist a loop");
                flag=1;
                break;
            }
            temp=temp->next;
        }
    check=check->next;
    }
    
        
        
        
        
        
        
        
        
        
        
}