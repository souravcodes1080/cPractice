#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

struct node *create(int, struct node *);
void display(struct node *);
main()
{
	struct node *head=NULL;
	int ch,n;
	while(1)
	{
		system("cls");
		printf("\n1.create \n2.display");
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter no. of nodes: ");
				scanf("%d",&n);
				head=create(n,head);
				break;
			case 2:
				display(head);
				break;
		}
	}
}
struct node * create(int n, struct node * head)
{
	struct node *temp, *ptr;
	int i;
	if(head==NULL)
	{
		printf("List doesnot exits...");
		return head;
	}
	
	for(i=1;i<=n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		
	}
}

void display(struct node * head)
{

}
