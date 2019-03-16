#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;

struct Node* getnode(int x)
{	
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}

void inserthead(int x)
{
	struct Node* temp = getnode(x);
	if(head == NULL)
	{
		head = temp;
		return;
	}

	head->prev = temp;
	temp->next = head;
	head = temp;
}

void inserttail(int x)
{
	struct Node* temp = getnode(x);
	struct Node* temp1 = head;
	if(head == NULL)
	{
		head = temp;
		return;
	}

	while(temp1->next!=NULL) temp1 = temp1->next;
	temp1->next = temp;
	temp->prev = temp1;
}

void show()
{
	struct Node* temp = head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	inserthead(3);
	inserthead(9);
	inserttail(5);
	inserthead(7);
	show();
	return 0;
}