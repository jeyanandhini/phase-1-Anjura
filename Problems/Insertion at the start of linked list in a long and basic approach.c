#include<stdio.h>
struct node 
{
	int data;
	struct node* next;
};

void main()
{
	struct node* temp;
    struct node* head;
    temp = (struct node*)malloc(sizeof(struct node));
    head = temp;
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
    
    struct node* begin;
    begin = (struct node*)malloc(sizeof(struct node));
    begin->data = 130;
    begin->next = NULL;
    
    struct node* middle;
    middle = (struct node*)malloc(sizeof(struct node));
    middle->data = 170;
    middle->next = NULL;
    
    struct node* end;
    end = (struct node*)malloc(sizeof(struct node));
    end->data = 210;
    end->next = NULL;
            
    temp->next = middle;
    temp1->next = temp2;
    
    begin->next = head;
    middle->next = temp1;
	temp2->next = end; 
    
    
    printf("\ndata at begin : %d address : %d", begin->data, begin->next);
    printf("\nData : %d Address : %d", temp->data, temp);
    printf("\ndata1 : %d address : %d", temp1->data, temp1);
    printf("\ndata1 : %d address : %d", temp->next->data, temp->next);
    printf("\ndata2 : %d address : %d", temp1->next->data, temp1->next);
    printf("\ndata2 : %d address : %d", temp->next->next->data, temp->next->next);
    
}
