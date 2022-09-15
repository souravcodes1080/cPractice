#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *create(struct node *, int);
void display(struct node *);
int main()
{
	struct node *head=NULL;
	int n;
	scanf("%d",&n);
	head=create(head,n);
	display(head);
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
			temp->next=ptr;
		}
		ptr=temp;
	}
	return head;
}

void diplay(struct node *head)
{
	struct node *temp;
	while(temp!=NULL)
	{
		printf("%d-> ",temp->data);
		temp=temp->next;
	}
}
