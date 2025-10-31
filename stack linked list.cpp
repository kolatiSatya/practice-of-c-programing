#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack*next;
}STACK;
STACK*top=NULL;
int count = 0;
void push(int);
int pop();
int peek();
int display();
void display();
void push(int info)
{
	STACK*newnode=(STACK*)malloc(size of(STACK));
	if(newnode==NULL)
	{
		printf("Memory not allocated");
		return;
	}
	newnode->next=top;
	newnode->next=NULL;
	if(top==NULL)
	top=newnode;
	else
	{
		newnode->next=top;
		top=newnode;
	}
	count++;
	printf("%d is pushed to stack\n",info);
}
int pop()
{
	int x;
	if(top==NULL)
	printf("stack is Underflow\n")
	else
	{
		STACK*temp=top;
		top=top->next;
		x=temp->data
		count--;
		free(temp);
		return x;
	}
}
int peek()
{
	if(top==NULL)
	printf("stack is empty");
	else 
	return top->data;
}
int display()
{
	if(top==NULL)
	printf
}
