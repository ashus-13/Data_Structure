#include<stdlib.h>
#include<stdio.h>

#define Maxsize 100
int top = -1;
int A[Maxsize];

void push(int x)
{
	if(top == Maxsize-1)
	{
		printf("Error Stack Overflow!!\n");
	}
	A[++top]=x;
}

void pop()
{
	if(top == -1)
	{
		printf("No element to pop!!\n");
	}
	top--;
}

void print()
{
	for(int i=0;i<=top;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	push(3);
	push(7);
	push(1);
	push(8);
	pop();
	print();
	push(4);
	print();
	return 0;
}