#include<stdio.h>

struct linked{
	int data;
	struct linked *next;
};
void insertatbegin(struct linked **head,int num )
{
	struct linked *new = (struct linked*) malloc(sizeof(struct linked));
	new->data=num;
	new->next=null;
	if(*head==NULL)
	{
		*head=new;		
	}
	else
	{
		new->next=*head;
		*head=new;
	}
}
int main()
{   
	struct linked *head=null; 
	insertatbegin(&head,10);
	insertatbegin(&head,20);
	insertatbegin(&head,30);
	insertatbegin(&head,40);
	
}
