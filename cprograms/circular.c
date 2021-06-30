#include<stdio.h>
#include<stdlib.h>
#define size 10
void enqueue();
void dequeue();
void display();
void exit();
int queue[size],front=-1,rear=-1;
int main()
{
int value,choice;
printf("\n circular queue");
while(1)
{
printf("\n 1.insertion \n 2.deletion \n 3.display \n 4.exit");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1: 
      enqueue();
      break;
case 2: dequeue();
        break;
case 3: display();
       break;
default: printf("\nivalid entry");
 }    
 }
  
  return 0;
 }
  void enqueue()
  {
  int value;
  if(rear==size-1)
  printf("not possible\n");
  else
  {
  printf("enter value\n");
      scanf("%d",&value);
  if(front==-1)
  {
  front=0;
  rear++;
  queue[rear]=value;
  printf("\nsuccessful\n");
  }
  else
   rear=rear+1;
   queue[rear]=value;
   printf("inserted\n");
  }
  }
  void dequeue()
  {
  if(rear==-1)
  printf("\ndeletion is not possible");
  else
  {
  printf("deleted,%d",queue[front]);
  front++;
  if(front>rear)
  front=rear=-1;
  }
  }
  void display()
  {
  int i;
  if(rear==-1)
  printf("\nno elements");
  else
  {
  printf("elements are........\n");
  for(i=front;i<=rear;i++)
  printf("%d",queue[i]);
  }
  }
  
  
  
 
