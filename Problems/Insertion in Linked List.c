#include<stdio.h>

struct node
{
	int data;
	struct node* next;
};

	struct node* head;
    
void main()
{
	insertnewnode(6);
	insertnewnode(7);
	insertnewnode(8);
	insertnewnode(9);
	insertnewnode(10);
	
	display();
}
	
	void insertnewnode(int val)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = val;
	temp->next = head;
	
	head = temp;
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
	printf(" the linked list looks like this after insertion\n");
	while(current!= NULL)
	{
		
		printf("%d\n", current->data);
		current = current->next;
	}
}
