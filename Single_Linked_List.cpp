#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n,i,element,choice,position;
	struct node *temp,*endnode,*startnode,*newnode,*next,*p;
	i=1;
	printf("\nEnter total number of nodes");
	scanf("%d",&n);
	printf("\nEnter node %d ",i);
	scanf("%d",&element);
	startnode=(struct node *) malloc(sizeof(struct node));
	startnode->data=element;
	startnode->next=NULL;
	endnode=startnode;
	for(i=2;i<=n;i++)
	{
		printf("\nEnter node %d  ",i);
		scanf("%d",&element);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=element;
		newnode->next=NULL;
		endnode->next=newnode;
		endnode=newnode;
	}
	p=startnode;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n Insertion & deletion");
	printf("\n 1 Ibegining");
	printf("\n 2 Ilast");
	printf("\n 3 IAny position");
	printf("\n 4 Dbegining");
	printf("\n 5 Dlast");
	printf("\n 6 DAny position");
	printf("\nEnter a choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Enter the element");
			scanf("%d",&element);
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=element;
			newnode->next=startnode;
			startnode=newnode;
	break;	
	case 2:
		printf("\n Enter an element");
		scanf("%d",&element);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=element;
		newnode->next=NULL;
		endnode->next=newnode;
		newnode=endnode;
	break;
	case 3:
		printf("\n Enter an element");
		scanf("%d",&element);
		printf("\n Enter the position");
		scanf("%d",&position);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=element;
		temp=startnode;
		for(i=1;i<position-1;i++)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	break;
	case 4:
		p=startnode;
		startnode=startnode->next;
		free(p);
	break;
	case 5:
		p=startnode;
		while(p->next!=NULL)
		{
		temp=p;
		p=p->next;
	}
	temp->next=NULL;
	free(p);
	
	break;
case 6:
	printf("\nEnter the position");
	scanf("%d",&position);
	p=startnode;
	for(i=1;i<position;i++)
	{
	temp=p;
	p=p->next;
}
temp->next=p->next;
free(p);
break;
default:
	printf("\nWrong choice");
}
//Traverse
		p=startnode;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
	
	

