#include<stdlib.h>
#include<stdio.h>

#define Maxsize 100
int front = -1;
int rear = -1;
int A[Maxsize];

bool isfull()
{
	return (rear+1)%Maxsize==rear?true:false;
}

bool isempty()
{
	return (front == -1 && rear == -1);
}

void push(int x)
{
	if(isempty()) 
	{
		front = 0; rear=0;
	}
	else if(isfull())
	{
		printf("Queue is Full!!!\n");
	}
	else
	{
		rear = (rear+1)%Maxsize;
	}
	A[rear]=x;
}

void pop()
{
	if(isempty()) printf("Queue is empty!!!\n");

	else if(front ==  rear)
	{
		front = -1; rear = -1;
	}
	else
	{
		front = (front+1)%Maxsize;
	}
}

int top()
{
	if(front == -1) printf("Queue is empty!!!\n");

	return A[front];
}

void show()
{
	int count = (rear+Maxsize-front)%Maxsize +1;
		for (int i=0; i<count;i++)
		{
			int index = (front+i)%Maxsize;
			printf("%d ",A[index]);
		}
		 printf("\n");
}

int main()
{
	push(1);
	push(4);
	push(8);
	push(5);
	show();
	pop();
	show();

}