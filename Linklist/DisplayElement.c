#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
PNODE Head=NULL;
void input()
{
	PNODE first=NULL;
	PNODE temp=NULL;
	int choice=1;
	do{
		temp=(PNODE)malloc(sizeof(NODE));//create new node for inserting value
		printf("\nEnter the data item::");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(Head==NULL)//if head is null or if first element then insert into head directly
		{
			Head=temp;
		}
		else
		{
			first->next =temp;
		}
		first = temp;
		fflush(stdin);
		printf("\nDo you wanna contiuns(type 0/1)?::");
		scanf("%d",&choice);
	}while(choice);
}
//Display the linklist
void Dis()
{
	int count=0;
	PNODE temp=Head;
	printf("\n ########## LINK_LIST #################\n");
	while(temp!=NULL)
	{
		count++;
		printf("\nnode[%d]=>%d",count,temp->data);
		temp=temp->next;
	}
	printf("\n No.of nodes in list::%d",count);
}
int main()
{
	printf("--------------Linklist------------");
	input();
	Dis();
	return 0;
}
