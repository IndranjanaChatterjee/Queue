#include <stdio.h>
#define MAX 4
int front=-1,rear=-1;
int queue[MAX];
void enqueue(int val)
{
	if(rear==(MAX-1))
	{
		printf("\nOverflows");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=val;
		
	}
}
int dequeue()
{
	if(front==-1)
	{
		printf("Underflows");
		return(-1);
	}
	else
	{
		int ele;
		ele=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		return(ele);
		
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
}
int main()
{
	int choice,value,get;
	
	
	printf("1 to enqueue 2 to dequeue and 3 to display:");
	scanf("%d",&choice);
	do
	{
		switch(choice)
		{
			case 1:
				
				printf("Enter the value to be entered:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				
				get=dequeue();
				if(get!=-1)
				{
				
				printf("element %d",get);
			    }
			    
				break;
			case 3:
				display();
				break;
			default:
				printf("Wrong choice");
			
		}
		printf("\n1 to enqueue 2 to dequeue and 3 to display:");
	    scanf("%d",&choice);
	}while(choice>=1 && choice<=3);
}