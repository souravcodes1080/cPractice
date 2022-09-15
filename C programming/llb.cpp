#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};

struct node * create(int);

int main()
{
	struct node *head;
	int ch,n;
	printf("\npress:- \n0. exit \n1. create\n");
	system("cls");
	scanf("%d",&ch);
	switch(ch)
	{
		case 0:
			exit(0);
		case 1:
			printf("Enter no. of nodes:- ");
			scanf("%d",&n);
			head= create(n);
			break;
	}
	return 0;
}

struct node * create(int n)
{
	struct node *head, *temp, *ptr;
	int i;
	for(i=1;i<=1;i++)
	{
		printf("\nEnter node value: ");
		scanf("%d",&temp->info );
		temp->next=NULL;
	}
	


}
