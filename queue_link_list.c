#include <stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* front;
struct Node* rear;

void push(int x)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if(front == NULL && rear == NULL)
	{	front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;	
}

void pop()
{
	struct Node* temp = front;
	if(front == rear)
	{
		front = rear = NULL;
		return;
	}
	else front = front->next;

	free(temp);
}

void show()
{
	struct Node* temp = front;

	printf("Queue Elements: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	push(2);
	push(1);
	push(9);
	push(5);
	show();
	pop();
	show();
	return 0;
}