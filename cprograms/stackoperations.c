#include<stdio.h>
#include<stdlib.h>
#define Size 4
int top=-1;
int stack[Size];
void push();
void pop();
void top1();
void display();

int main()
{
	int choice;
	while(1)
	{
		printf("\n OPERATIONS OF STACK");
		printf("\n1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit");
		printf("\nENETR YOUR CHOICE:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				top1();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choice:");
		 }
	}
}
	void push()
	{
		int x;
		printf("Enter element to be inserted :");
		scanf("%d",&x);
		if(top==Size-1)
		{
			printf("\n STACK Overflow");
		}
		else
		{
			top++;
			stack[top]=x;
		}
	 }
	 void pop()
	 {
		int item;
		if(top==-1)
		{
			printf("\n STACK Underflow");
		}
		else
		{
			item=stack[top];
			top--;
			printf("\nPoped element is:%d",item);
		}
	}
	void top1()
		{
			if(top==-1)
			{
				printf("Stack is empty");
			}
			else
			{
				printf("\nTop element is:%d",stack[top]);
			}
		}
	void display()
		{
			int i;
			if(top==-1)
			{
				printf("\n STACK Underflow");
			}
			else
			{
				printf("Elements Are..........:\n");
				for(i=top;i>=0;i--)
				{
					printf("%d\n",stack[i]);
				}
			}
		}
