#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} node;
int main()
{	int n,k,i,num;
	printf("enter no.of nodes:");
	scanf("%d",&n);
	node*head=NULL;
	node *prev;
        printf("enter numbers in your list:");
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
	printf("before rotations your list in form");
	node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;	
	}
	printf("\n enter no. of rotations:");
	scanf("%d",&k);
	node *last=head;
	node *first=head;
	for(i=0;i<k;i++){
		while( last!=NULL){
			if(last->next==NULL)
			{
				last->next=first;
				head=head->next;
				first->next=NULL;
				first=head;
				last=head;
				break;
			}
			else{
				last=last->next;
			}
		}
		
	}
	printf("after rotating:\n");
	node *line=head;
	while(line!=NULL)
	{
		printf("%d->",line->data);
		line=line->next;	
	}
	temp=head;
	while(temp!=NULL){
	    head=head->next;
	    free(temp);
	    temp=head;
	}
	
	
	
	
	
	
	
	
	
	
}
