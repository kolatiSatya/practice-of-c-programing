#include<stdio.h>
#include<stdlib.h>
// node structure
struct node
{
	struct node*prev;
	int data;
	struct node*next;
};
// function prototypes
void create_list();
struct node*create_node();
void display();
// Global variables
struct node*head=NULL, *end=NULL;
int count=0;
// function to create newnode
struct node*create_node()
{
	int info;
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Can't allocate memory\n");
		return;
	}
	printf("\nEnter data into a node:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
// function to create list of nodes
void create_list()
{
	struct node*newnode=create_node();
	if(head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
	}
	count++;
	printf("___Node is Created/Added___\n");
}
// function to display the list in forward direction
void display()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return ;
	}
	temp=head;
	printf("\nList Elements (forward):\n");
	while (temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("END NULL\n");
}
// function to display the list in backward direction
void reverse_order()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return ;
	}
	temp=end;
	printf("\nList Elements (Backward):\n");
	while (temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	printf("HEAD NULL\n");
}
// function to insert node at first
void InsertAtBegin()
{
	struct node*newnode=create_node();
	if(head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
	count++;
	printf("___Node is Added at first___\n");
}
// function to insert node at last
void InsertAtEnd()
{
	struct node*newnode=create_node();
	if(head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
	}
	count++;
	printf("___Node is Added at last___\n");
}
// function to insert node at any position
void InsertAnyPosition()
{
	struct node*newnode,*temp,*curr;
	int pos,i;
	printf("\nEnter postion to insert:");
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("Invalid position\n");
		return ;
	}
	if(pos==1)
	{
		InsertAtBegin();
		return ;
	}
	else if(pos==count+1)
	{
		InsertAtEnd();
		return ;
	}
	newnode=create_node();
	curr=head;
	for(i=1;i<pos;i++)
	{
		temp=curr;
		curr=curr->next;
	}
	newnode->next=curr;
	newnode->prev=temp;
	curr->prev=newnode;
	temp->next=newnode;
	count++;
	printf("___Node is Added at Position %d___\n",pos);
}
// function to delete at first
void DeleteAtBegin()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty.\n");
		return ;
	}
	if(head->next==NULL)
	{
		free(head);
		head=NULL;
		end=NULL;
		return ;
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	count--;
	printf("___Node is deleted at first___\n");
}
// funtion to delete at end in double linked list
void DeleteAtEnd()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty.\n");
		return ;
	}
	if (head->next==NULL)
	{
		free(head);
		head=NULL;
		end=NULL;
		return ;
	}
	temp=end;
	end=end->prev;
	end->next=NULL;
	free(temp);
	count--;
	printf("___Node is deleted at last___\n");
}
void DeleteAnyPosition()
{
	int pos,i;
	struct node *curr,*temp;
	if(head==NULL)
	{
		printf("List is empty. Nothing to delete.\n");
		return ;
	}
	printf("\nEnter position to delete:");
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		printf("Invalid position!\n");
		return ;
	}
	else
	{
		curr=head;
		
		for(i=1;i<pos;i++)
		{
			temp=curr;
			curr=curr->next;
		}
		temp->next=curr->next;
		curr->next->prev=temp;
		free(curr);
	}
	count--;
	printf("___Node is deleted at %d position___\n",pos);
}
int main() 
{
    int choice;
    while (1) 
	{
        printf("\nDouble Linked List Operations:\n");
        printf("1. Create Node\n");
        printf("2. Display List (Forward)\n");
        printf("3. Display List (Backward)\n");
        printf("4. Insert at beginning\n");
        printf("5. Insert at end\n");
        printf("6. Insert at any position\n");
        printf("7. Delete at beginning\n");
        printf("8. Delete at end\n");
        printf("9. Delete at any position\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
            create_list();
            break;
            case 2:
            display();
            break;
            case 3:
            reverse_order();
            break;
            case 4:
            InsertAtBegin();
            break;
            case 5:
            InsertAtEnd();
            break;
            case 6:
            InsertAnyPosition();
            break;
            case 7:
            DeleteAtBegin();
            break;
            case 8:
            DeleteAtEnd();
            break;
            case 9:
            DeleteAnyPosition();
            break;
            case 10:
            printf("Exiting...\n");
            exit(0);
            default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
