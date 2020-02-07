//stack using the static array
#include<stdio.h>
#include<stdlib.h>
#define Maxsize 5

struct stack
{
	int stk[Maxsize];
	int top;
};
typedef struct stack STACK;
STACK s;

void push();
int pop();
void display();

int main()
{
	int choice;
	int ans=0;
	int opation = 1;
	s.top = -1;
	printf("\n---------------STACK OPERATION----------------\n");
	while(opation)
	{
		printf("-----------------------------------------------\n");
		printf("\t\t 1 ---> PUSH \n");
		//printf("-----------------------------------------------\n");
		printf("\t\t 2 ---> POP \n");
		//printf("-----------------------------------------------\n");
		printf("\t\t 3 ---> DISPLAY \n");
		//printf("-----------------------------------------------\n");
		printf("\t\t 4 ---> EXIT\n");
		printf("-----------------------------------------------\n");
		printf("\nEnter your choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
			case 2:
			ans=pop();
			printf("\nPOP no::%d\n",ans);
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			break;
			default:
			printf("\n please Enter a thus no::\n 1::PUSH\n2::POP\n3::DISPLAY\n4::EXIT\n ");

		}
	}
}

void push()
{
	int num=0;
	if(s.top==(Maxsize-1))
	{
		printf("\n stack is Full");
		return;
	}
	else
	{
		printf("\nEnter the element to be pushed::");
		scanf("%d",&num);
		s.top =s.top+1;
		s.stk[s.top] =  num; 
	}
	return;
}
int pop()
{
	int num=0;
	if(s.top==-1)
	{
		printf("\nstatck is Empty ");
		return(s.top);
	}
	else
	{
		num=s.stk[s.top];
		//printf("\n");
		s.top=s.top -1;
		return num;
	}
}
void display()
{
	int i=0;
	if(s.top ==-1)
	{
		printf("\nStack is empty...");
		return ;
	}
	else
	{
		printf("\n the status of the stack is::");
		for(i=s.top;i>=0;i--)
		{
			printf("\n%d",s.stk[i]);
		}
	}
	printf("\n");
}