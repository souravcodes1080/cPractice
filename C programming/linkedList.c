#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct node 
{
	int info;
	struct node * next;
};

struct node *create(struct node *);
void display(struct node *);
struct node *insertB(struct node *);
void insertE(struct node *);
struct node *deleteB(struct node *);
struct node *deleteE(struct node *);
struct node *reverse(struct node*);
int countL(struct node*);


main()
{
	struct node *head= NULL;
	int count, ch,n;

	while(1)
	{
		system("cls");
		printf("\n\n --------------------------");
		printf("\n|\t0.Exit                               |\n|\t1.Create a List                       |\n|\t2.Display the List                    |\n|\t3.Insert at Begin                     |\n|\t4.Insert at End                       |\n|\t5.Delete at Begin                     |\n|\t6.Delete at End                       |\n|\t7.Count the number of Elements        | \n|\t8.Reverse                             |\n");
		printf(" --------------------------\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);	
		switch (ch)
		{
			case 0:
				exit(0);
			case 1:
				
				head=create(head);
				printf("\n-----|| PLEASE WAIT ||-----");
				Sleep(4000);
				break;
			case 2:
				display(head);
				printf("\n-----|| PLEASE WAIT ||-----");
				Sleep(5000);
				break;
			case 3:
				head=insertB(head);
				printf("\n-----|| PLEASE WAIT ||-----");
				Sleep(4000);
				break;	
			case 4:
				insertE(head);
				printf("\n-----|| PLEASE WAIT ||-----");
				Sleep(4000);
				break;
			case 5:
				head=deleteB(head);
				printf("\n-----|| PLEASE WAIT ||-----");
				Sleep(4000);
				break;
		}
	}
	
}


struct node * create(struct node * head)
{
	struct node *ptr, *temp;
	int i,n;
	if(head!=NULL)
	{
		printf("\n\nSorry, a List has already been created...!\nPress 2 to display your existing List.\n\n");
		return head;
	}
	printf("\nEnter the number of elements you want to create: ");
	scanf("%d",&n);
	printf("\n%d no. of nodes has been sucessfully created!...\n\n",n);
	for(i=1;i<=n;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		printf("Enter respective data: ");
		scanf("%d",&ptr->info);
		ptr->next=NULL;
		if(head==NULL)
			head=ptr;			
		else
			temp->next=ptr;
		temp=ptr;
	}
	printf("\nA list with %d no. of elements has been created.\n\n",n);
	return head;
}
void display(struct node *head)
{
	if(head==NULL)
	{
		printf("\n\nNOTHING TO DISPLAY HERE...!! \nMake a list first.\n");
		return;
	}
	struct node *temp=head;
	printf("\n");
	while(temp!=NULL)
	{
		if(temp->next==NULL)
			printf("->%d",temp->info);
		else
			printf("->%d\n",temp->info);
		temp=temp->next;
	}
	printf("\n");
}
struct node *insertB(struct node * head)
{
	struct node *temp,*newnode;
	if(head==NULL)
	{
		printf("\nList does not exists... \nPress 1 to create a new list.\n");
		return head;
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("MEMORY FULL");
		return;
	}
	printf("\nEnter data you want to insert: ");
	scanf("%d",&newnode->info);
	newnode->next=head;
	head=newnode;
	printf("\nA element has been inserted at the beginning.\n");
	return head;
}
void insertE(struct node * head)
{
	struct node *temp,*newnode;
	if(head==NULL)
	{
		printf("\nList does not exists... \nPress 1 to create a new list.\n");
		return;
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("MEMORY FULL");
		return;
	}
	printf("\nEnter data you want to insert: ");
	scanf("%d",&newnode->info);
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;	
	}
	temp->next=newnode;
	newnode->next=NULL;
	printf("\nAn element has been inserted at the End.\n");
	return;
}
struct node *deleteB(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("\nList does not exists... \nPress 1 to create a new list.\n");
		return;
	}
	head=head->next;
	free(temp);
	printf("\nAn element from begining has been removed sucessfully...!!\n");
	return head;
}

































