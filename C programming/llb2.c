#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *createList(int);
void displayList(struct node *);
struct node *ib(struct node *);
int main()
{
	int ch, n;
	struct node *head=NULL;
	system("cls");
	while(1)
	{
		printf("\n 0. Exit. \n 1. Create list. \n 2. Display list. \n 3. Insert at begining.\n");
		printf("\n Enter your choice:--\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				printf("\nEnter no. of nodes you want to create:- ");
				scanf("%d",&n);
				printf("\n");
				head=createList(n);
			break;
			case 2:
				displayList(head);
			break;
			case 3:
				head=ib(head);
		}
	}
	
	
	return 0;
}

struct node *createList(int n)
{
	struct node *head =NULL, *ptr,*temp;
	int i;
	if(head !=NULL)
	{
		printf("\nList already exists!!");
		return(head);
		
		
		
	}
	else
	{
	
		for(i=0;i<n;i++)
		{
			temp= (struct node*)malloc(sizeof(struct node));
			printf("\nEnter node value: ");
			scanf("%d",&temp->data);
			temp->next=NULL;
		
			if(head==NULL)
			{
				head=temp;
			}
			else
			{
				ptr->next=temp;
			}
			ptr=temp;
		}
	}
	return (head);
}
	
void displayList(struct node *head)
{
	
	while(head!=NULL)
	{
		printf("%5d",head->data);
		head=head->next;
	}
	printf("\n");
}

struct node *ib(struct node *head)
{
	struct node *temp;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter value for new node: ");
	scanf("%d",&newnode->data);
	
	newnode->next=head;
	return(head);
}
	








