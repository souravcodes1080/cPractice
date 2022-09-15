#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void display(struct node *);
struct node * create(int n);
int main()
{
    int n;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    struct node *head=NULL;
    head=create(n);
    display(head);
    return 0;
}

struct node * create(int n)
{
    int i;
    struct node *head =NULL;
    struct node *temp= NULL;
    struct node *ptr = NULL;

    for(i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter node value: ");
        scanf("%d",&temp->data);
        temp->link=NULL;
        if (head==NULL)
        {
            head=temp;
        }
        else
        {
            ptr->link=temp;
            
        }
        ptr=temp;
    }
    return head;
}








void display(struct node * ptr)
{
    while (ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr= ptr->link;
    }
    
}
















//#include<stdio.h>
//#include<stdlib.h>
//
//struct node
//{
//	int data;
//	struct node *next;
//};
//
//struct node * create(int);
//void display(struct node*);
//
//void main()
//{
//	int n =0;
//	struct node *head= NULL;
//	printf("Enter no. of nodes:-  ");
//	scanf("%d",&n);
//	head=create(n);
//	display(head);
//}
//
//struct node * create(int n)
//{
//	int i;
//	struct node *temp, *ptr, *head=NULL;
//	
//	for(i=0;i<n;i++)
//	{
//		temp = (struct node*)malloc(sizeof(struct node));
//		printf("\nEnter data: ");
//		scanf("%d",&temp->data);
//		temp->next= NULL;
//		if(head==NULL)
//		{
//			head=temp;		
//		}
//		else
//		{
//			ptr->next=temp;
//		}
//		ptr=temp;
//	}
//	return head;
//}
//
//void display(struct node * p)
//{
//	
//	while(p!=NULL)
//	{
//		printf("%d->",p->data);
//		p= p->next;
//	}	
//}
