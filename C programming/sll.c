#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}node;

node* create (node*,int);
void display(node*);
node *insertB(node*);
node *insertE(node*);

int main()
{
    node* head=NULL;
    int ch,n;
    while(1)
    {
        system("cls");
        printf("\n1.Create\n2.Display\n3.Insert at beginning\n4.Insert at end\n");
        printf("\nEnter Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter no. of nodes: ");
                scanf("%d",&n);
                head=create(head,n);
                getch();
                break;
            case 2:
                display(head);
                getch();
                break;
            case 3:
                head=insertB(head);
                getch();
                break;
            case 4:
                head=insertE(head);
                getch();
                break;
        }
    }
    return 0;
}

node *create(node *head, int n)
{
    int i;
    node *newnode=NULL, *temp=NULL;
    if(head!=NULL)
    {
        printf("\nList already Exists...");
        return head;
    }
    for(i=1;i<=n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("\nEnter data:- ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp->next=newnode;
        }
        temp=newnode;
    }
    return head;
}

void display(node *temp)
{
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

node *insertB(node *head)
{
    node *temp, *newnode=NULL;
    newnode=(node*)malloc(sizeof(node));
    printf("\nEnter data:- ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    temp=head;
    newnode->next=temp;
    head=newnode;
    return head;
}

node *insertE(node*head)
{
    node *temp, *newnode=NULL;
    newnode=(node*)malloc(sizeof(node));
    printf("\nEnter data:- ");
    scanf("%d",newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    return head;
}