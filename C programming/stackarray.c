#include<stdio.h>
#include<stdlib.h>
#define maxsize 9

int stack[maxsize];
int top,ele;
top= -1;

int push(int, int);
int pop(int);
void display(int);

main()
{
	int ch, n;
	while(1)
	{
  		system("cls");
  		printf("\n\n=={{THE STACK LIMIT IS '10'}}==\n");
		printf("\n\t\t -------------");
		printf("\n\t\t| 0.EXIT      |\n\t\t| 1.PUSH      |\n\t\t| 2.POP       |\n\t\t| 3.PEEK      |\n\t\t| 4.DISPLAY   |\n");
		printf("\t\t -------------");
		
		printf("\n\n\nEnter Your Choice:: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				printf("\nEnter element:- ");
				scanf("%d",&ele);
				top=push(top,ele);
				printf("\n(Press a key to continue...)");
				getch();
				break;
			case 2:
				top=pop(top);
				printf("\n(Press a key to continue...)");
				getch();
				break;
			case 3:
				printf("The topmost(Peek) value is:-  %d",stack[top]);
				printf("\n(Press a key to continue...)");
				getch();
				break;
			case 4:
				display(top);
				printf("\n(Press a key to continue...)");
				getch();
				break;
			default:
				printf("\nINVALID INPUT");
				
		}
	}
}

int push(int top,int ele)
{
	if(top==maxsize)
	{
		printf("\nStack overflow!!");
	}
	else
	{
		top=top+1;
		stack[top]=ele;
	}
	return top;
}

int pop(int top)
{
	if(top==-1)
	{
		printf("\nStack underflow!!");
	}
	else
	{
		ele=stack[top];
		top=top-1;
		printf("\nThe top value has been popped off!!");
	}
	return top;
}

void display(int top)
{
	int i;
	if(top==-1)
	{
		printf("\nStack empty!!");
	}
	else
	{
		for(i=top; i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
		printf("\n");
	}
}













