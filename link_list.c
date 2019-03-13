#include<stdlib.h>
#include<stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;
int insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;

}

void show()
{
	struct Node* temp = head;
	printf("List: ");
	while(temp!=NULL)
	{
		printf("%d",temp->data );
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	struct Node* temp;
	int i,x,n;
	printf("How many Numbers to enter\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("Enter the element\n");
		scanf("%d",&x);
		insert(x);
		show();
	}

	return 0;
}	