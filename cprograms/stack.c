#include<stdio.h>
#define N 5
void main()
{
void push();
void pop();
void top();
void displa();
int stack[N];
int top=-1;
void push()
{
int x; 
printf("enter data");
scanf("%d",&x);
if(top==N-1)
{
printf("stack ooverflow");
}
else
{
top=top+1;
stack[top]=x;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("stack underflow");
}
else
{
item=stack[top];
top--;
printf("%d poped item",item)
}
}
void top()
{
if(top==-1)
{
printf("stack empty");
}
else
{
printf("%d",stack[top]);
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
}
int choice;
char menu=TRUE;
do
{
printf("please select the one of the following options\n");
printf("1: to add element\n 2:to delete item from your stack\n 3:to print top element\n 4:display\n");
printf("enetr your selection 1 2 3 or 4:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("inserting stack elements\n");
void push();
break;
case 2:
printf("deleting stack elements\n");
void pop();
break;
case 3:
printf("printing top elemrnts\n");
void top();
break;
case 4:
printf("displaying stack elements\n");
void push();
break;
default:
printf("your selection must be between 1 and 4\n");
}
}
while(choice!=4);
getchar();
}



