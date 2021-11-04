#include<stdio.h>

struct node
{
	struct node* prev;
	char data;
	struct node* next;
};

struct node* head;

void main()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = 'A';
	temp->next = NULL;
	
	struct node* temp1;
	temp1 = (struct node*)malloc(sizeof(struct node));
	temp1->prev = NULL;
	temp1->data = 'B';
	temp1->next = NULL;
	
	head = temp;
	temp->next = temp1;
	temp1->prev = temp;
	
	struct node* run;
	run = head;
	
	while(run != NULL)
	{
		printf("%c -> ", run->data);
		run = run->next;
	}	
}
