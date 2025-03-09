#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
}*head;


void ins_beg()
{	int dat; 
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("Memory underflow");
	}
	else
	{	printf("Enter the data to be added:\n");
		scanf("%d",&dat);
		temp->data=dat;
		temp->link=head;
		head = temp;
		printf("Node Inserted!\n");
		
	}
}

void ins_end()
{
	int dat; 
	struct node *temp;
	struct node *ptr;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be added:\n");
		scanf("%d",&dat);
	if(temp==NULL)
	{
		printf("Memory underflow");
	}
	
	else if(head==NULL)
	{
		temp->link=NULL;
		temp->data=dat;
		head=temp;
		printf("Node Inserted!\n");
		
		
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{	
			
			ptr=ptr->link;
		}
		temp->link=NULL;
		temp->data=dat;
		ptr->link=temp;
		
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	while (ptr!=NULL)
	{
		printf(" %d", ptr->data);
		ptr=ptr->link;
	}
}

void any_pos()
{	struct node *ptr;
	ptr=head;
	int element;
	printf("Enter the position to be searched:\n");
		scanf("%d",&element);
	
	while(ptr->data!=element || ptr->link==NULL)
	{
		ptr=ptr->link;
		if(ptr->link==NULL)
		{
			printf("Search fails.");
		}
		else
		{
			temp->link = ptr->link;
			ptr->link=temp;
		}
	}
}

void del_beg()
{
	
	struct node *ptr;
	if(ptr==NULL)
	{
		printf("Deletion Not Possible. Underflow Error!");
	}
	else
	{
		ptr=head;
		
	}
}

int main()
{   int op, end=0;
    while(end!=2)
    {
    printf("Enter the operation to be performed:\n1.Insertion at Beginning\n2.Insertion at End\n3.Insertion at any position\n4.Deletion at Beginning\n5.Deletion at any position\n6.Insertion at Beginning");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        ins_beg();
        break;

    case 2:
        ins_end();
        break;

    case 3:
       //ins_any();
        break;
        
    case 4:
        del_beg();
        break;

    case 5:
        //del_end();
        break;

    case 6:
       // del_any();
       
    case 7:
    	display();
        break;

    default:
        printf("Invalid Operation.\n");
        end=2;
        break;
    }

    }
}
