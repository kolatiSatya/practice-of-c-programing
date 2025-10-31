#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*end=NULL;
int count=0;
void create_nodes();
void display();
void create_nodes()
{
	int info;
	struct node *newnode;
	newnode = (struct node*)malloc(1*sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Overflow");
		return;
	}
	printf("Enter data into a node");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=end=newnode;
}
	else
	{
		end->next=newnode;
		end=newnode;
	}
	count++;
	printf("\nNode is created or added");
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		("\n List is empty");
	}
	else
	{
	    printf("\nThe list elements are ");
	    temp=head;
	    while(temp!=NULL)
	    {
		    printf("%d->",temp->data);
		    temp=temp->next;
	    }
    }
}
int main ()
{
	int ch;
	while(1)
	{
		printf("\n*MENU*");
		printf("\n1.create \n2.display \n3.size of list \n9.exit");
		printf("\nEnter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create_nodes(); break;
			case 2:display(); break;
			case 3:printf("\n No.of nodes are : %d",count); break;
			case 9:exit(0);
			default:printf("\nInvalid choice");
		}
	}
	return 0;
}
