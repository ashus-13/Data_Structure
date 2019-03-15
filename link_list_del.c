#include <stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;
void insert(int data, int n)
{
	struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;

	if(n==1)
	{
		temp->next = head;
		head = temp;
		return;
	}

	struct Node* temp1=head;

	for(int i=0;i<(n-2);i++)
	{
		temp1=temp1->next;
	}
	temp->next = temp1->next;
	temp1->next=temp;
}


void show()
{
	struct Node* temp = head;
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void del(int n)
{
	struct Node* temp = head;

	if(n==1)
	{
		head=temp->next;
		free(temp);
		return;
	}

	for(int i=0;i<(n-2);i++)
	{
		temp=temp->next;
	}
	struct Node* temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
}
int main()
{
	head=NULL;
	insert(2,1);
	insert(6,2);
	insert(9,3);
	show();
	del(1);
	show();

	return 0;
}