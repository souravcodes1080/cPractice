#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node * link;
}node;

node * create(node *, int);
void display(node *);

main()
{
	node * head=NULL;
	int ch, n;
	while(1)
	{
		printf("\n1-Create\n2-Display\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter no. of node: ");
				scanf("%d",&n);
				head=create(head,n);
				break;
			case 2:
				display(head);
				break;
		}
	}
}

node * create(node * head, int n)
{
	
	int i;
	node * temp=NULL, *ptr=NULL;
	if(head!=NULL)
	{
			printf("List already exists...");
			return head;
	}
	for(i=1;i<=n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter data: ");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			ptr->link=temp;
		}
		ptr=temp;
	}

	return head;
}

void display(node * temp)
{
	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}











