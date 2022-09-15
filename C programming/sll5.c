#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node * next;	
};

struct node * create(struct node *,int);
void display(struct node *);

int main()
{
	struct node * head=NULL;
	int n, ch;
	while(1){
		system("cls");
		printf("\n---------------------------------------------------------------------\n");
		printf("\n\t\t\t0. Exit \n\t\t\t1. Create list \n\t\t\t2. Display list\n");	
		printf("\n---------------------------------------------------------------------");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				printf("\nEnter number of nodes you want to create:- ");
				scanf("%d",&n);
				head=create(head,n);
				break;
			case 2:
				display(head);
				break;
		}
	}
	
	
	return 0;
}

struct node * create(struct node * head, int n)
{
	int i;
	struct node * temp = NULL, * ptr= NULL;
	if(head ==NULL){
	
		printf("\nList already exists...");
		return head;
	}
	else
	{
	
	for(i=1; i<=n; i++)
	{
		temp= (struct node *)malloc(sizeof(struct node));
		printf("\nEnter node value:- ");
		scanf("%d",&temp->info);
		temp->next=NULL;
		if(head==NULL){
		
			head=temp;
		}
		else
		{
			ptr->next=temp;
		}
		ptr=temp;
		
	}	
	}
	return head;
}

void display(struct node * ptr)
{
	while(ptr!=NULL)
	{
		printf("%5d",ptr->info);
		ptr=ptr->next;
	}
}



























