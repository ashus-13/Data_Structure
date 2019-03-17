#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* top = NULL;

void push(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = top;
	top = temp;
}

void pop()
{
	struct Node* temp;
	if(top == NULL) printf("Stack is empty!!!\n");
	temp = top;
	top= top->next;
	free(temp);
}

void show()
{
	struct Node* temp = top;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	push(3);
	push(2);
	push(9);
	push(6);
	show();
	pop();
	show();
	push(4);
	show();
	return 0;
}