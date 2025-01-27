node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;	
	}
	node *move;
	node *move_previous;
	node *check=head;
	
	for(i=0;i<n;i++){
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
	printf("after removal:\n");
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
