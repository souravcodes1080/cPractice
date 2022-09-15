#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * link;
};

struct node * create(struct node *,int);
void display(struct node *);

int main()
{
	struct node *head=NULL;
	int n, ch;
	while(1)
	{
		
		printf("\n1. Create list. \n2. Display \n3. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter no. of nodes:- ");
				scanf("%d",&n);
				head=create(head,n);
				break;
			case 2:
				display(head);
				break;
			case 3:
				exit(0);
		}
	}	

}
struct node *create(struct node * head, int n)
{
	struct node *temp=NULL, *ptr=NULL;
	int i;
	if(head!=NULL)
	{
		printf("\nList exists...");
	}
	else{
		for(i=1;i<=n;i++)
		{	
		temp=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter node value:- ");
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
	}
	
	return head;
}

void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%5d",ptr->data);
		ptr=ptr->link;
	}
}






