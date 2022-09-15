#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node * next;
};
struct node* create(int);
void display(struct node *);
int main()
{
	struct node * head=NULL;
	int n, ch;
	while(1)
	{
		
		printf("\n1. Create list. \n2. Display \n3. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				
				
				printf("Enter no. of item: ");
				scanf("%d",&n);
				head=create(n);
				display(head);
				break;
}

struct node * create(int n)
{
	int i;
	struct node * head=NULL;
	struct node * temp=NULL, *ptr=NULL;
	for(i=1;i<=n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter node data: ");
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

void display(struct node * ptr)
{
	
	while(ptr!=NULL)
	{
		printf("%d-->",ptr->data);
		ptr=ptr->next;
	}
}




























