#include<stdio.h>

struct node
{
	int data;
	struct node* next;
};

	struct node* head;
    
void main()
{
    int choice; int value;
    
    insertnewnode(700);
    insertnewnode(1100);
    printf("the linked list contains the data originally:\n");
    display();
    
    printf("\n\n choice 1: insertion at front\n choice 2: insertion at rear\n choice 3: insertion at a position\n");
    printf("\n enter your choice\n");
    scanf("%d", &choice);
    
    switch(choice)
    {
    	case 1: 
		printf("\nyou chose insertion at the front position\n");
		printf("enter the number to be inserted\n");
		scanf("%d", &value);
		insertnewnode(value);
		display();
		break;
		
		case 2: 
		printf("\nyou chose insertion at rear position\n");
		printf("enter the number to be inserted\n");
		scanf("%d", &value);
		insertatend(value);
		display();
		break;
	
		
		case 3:
		printf("\nyou chose insertion at a position\n");
		printf("enter the number to be inserted\n");
		scanf("%d", &value);
		insertatposition(value);
		display();
		break;
	
		
		default: printf("\nwrong choice");
		break;
	}
  	

}
void insertnewnode(int val)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = val;
	temp->next = head;
	
	head = temp;
}

void insertatend(int val)
{
	struct node* end;
	struct node* run;
	end = (struct node*)malloc(sizeof(struct node));
	end->data = val;
	end->next = NULL;
	
    run = head;
	while(run->next!= NULL)
	{
	run = run->next;
    }

    run->next = end;
	
}

void insertatposition(int val)
{
	int pos;
	printf("enter the position\n");
	scanf("%d", &pos);
	struct node* position;
	struct node* run;
	position = (struct node*)malloc(sizeof(struct node));
	position->data = val;
	position->next = NULL;
	int i;
	i=1;
	run= head;
	
	while(i<pos-1)
	{
		run = run->next; 
		i++;
	}
	position->next = run->next;
	run->next = position;
}

void display()
{
	struct node *current;
	current = head;
	
	if(head == NULL)
	{
		printf("list is empty");
		return;
	}
	printf("\n\nnow, the linked list looks like this\n");
	while(current!= NULL)
	{
		
		printf("%d->", current->data);
		current = current->next;
	}
}
