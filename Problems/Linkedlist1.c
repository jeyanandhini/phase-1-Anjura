#include<stdio.h>

struct node 
{
	int data;
	struct node* next;
};

void main()
{
	struct node* temp;
    //struct node* head;
    temp = (struct node*)malloc(sizeof(struct node));
    //temp = head;
    temp->data = 30;
    temp->next = NULL;
    
    struct node* temp1;
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = 70;
    temp1->next = NULL;
    
    struct node* temp2;
    temp2 = (struct node*)malloc(sizeof(struct node));
    temp2->data = 110;
    temp2->next = NULL;
        
    temp->next = temp1;
    temp1->next = temp2;
    
    printf("Data : %d Address : %d", temp->data, temp);
    printf("\ndata1 : %d address : %d", temp1->data, temp1);
    printf("\ndata1 : %d address : %d", temp->next->data, temp->next);
    printf("\ndata2 : %d address : %d", temp1->next->data, temp1->next);
    printf("\ndata2 : %d address : %d", temp->next->next->data, temp->next->next);
}
