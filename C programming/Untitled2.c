#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void pl(struct node * p)
{
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
}

int main()
{
	struct node * head, * second, * third;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	
	head->data= 69;
	head->next= second;
	
	second->data= 96;
	second->next= third;
	
	third->data= 420;
	third->next= NULL;
		
	pl(head);	
}
