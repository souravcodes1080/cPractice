#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}node;

node * create(node*,int);
void display(node*);



main()
{
	int ch,i,n;
	node *head=NULL;
	while(1)
	{

		printf("\n1.Create\n2.Display\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter no. of nodes: ");
				scanf("%d",&n);
				head=create(head,n);
				break;
			case 2:
				display(head);
				break;
		}
	}
}

node *create(node*head,int n)
{
	node * temp=NULL, *ptr=NULL;
	int i;
	if(head!=NULL)
	{
		printf("List exists...");
		return head;
	}
	for(i=1;i<=n;i++)
	{
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter data: ");
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
	return head;
}

void display(node* temp)
{
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}




















