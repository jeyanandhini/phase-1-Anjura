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
    
    insertnewnode(5);
    insertnewnode(4);
    insertnewnode(3);
    insertnewnode(2);
    insertnewnode(1);
    
    printf(" before reversal: \n");
    display();
    
    struct node* left;
    left = (struct node*)malloc(sizeof(struct node));
    left = NULL;
    
    struct node* current;
    current = (struct node*)malloc(sizeof(struct node));
    current = head;
    
    struct node* right;
    right = (struct node*)malloc(sizeof(struct node));
    right = head->next;
    
    while(right != NULL)
    {
    	current->next = left;
    	left = current;
    	current = right;
    	right = right->next;
	   }
	current->next = left;
	head = current;
	
	printf("\n After reversal: \n");
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
	struct node *curr;
	curr = head;
	
    while(curr!= NULL)
	{
		printf("%d -> ", curr->data);
		curr = curr->next;
	}
}
