#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

main()
{
	struct node * head=NULL;
	struct node *temp;
	struct node *ptr;
	int i,n;
	printf("\nEnter number of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		temp=(struct node *) malloc(sizeof(struct node));
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
	while(ptr!=NULL)
	{
		printf("%4d",ptr->data);
		ptr=ptr->next;
	}
}
