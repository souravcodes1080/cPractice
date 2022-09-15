#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *create(struct node *, int);
void display(int);
int main()
{
	struct node *head=NULL;
	int n;
	scanf("%d",&n);
	head=create(head,n);
	display(n);
	return 0;
}

struct node *create(struct node * head, int n)
{
	int i;
	struct node *temp, *ptr;
	head = NULL;
	for(i=1;i<=n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter data: ");
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

void display(int n)
{
	struct node *temp;
	while(temp!=NULL)
	{
		printf("%d-> ",temp->data);
		temp=temp->next;
	}
}
