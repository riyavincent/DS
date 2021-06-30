#include<stdio.h>
#include<stdlib.h>
void display();
void pop();
void push();
struct node
{
int value;
struct node*next;
};
struct node*head;
int main()
{
int choice=0;
printf("LINKED STACK\n");
while(choice!=4)
{
printf("1.push \n 2.pop \n 3.display\n");
printf("enter your choice");
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
       display();
       break;
default:
      printf("invalid");
      break;
      
 }
 }
 return 0;
 }
 void push()
 {
 int value;
 struct node*ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr==NULL)
 {
 printf("not possible");
 }
 else
 {
 printf("enter value");
 scanf("%d",&value);
 if(head==NULL)
 {
 ptr->value=value;
 ptr->next=NULL;
 head=ptr;
 }
 else
 {
 ptr->value=value;
 ptr->next=head;
 head=ptr;
 }
 }
 
 printf("item pushed\n");
 }
 void pop()
 {
 int item;
 struct node*ptr;
 if(head==NULL)
 {
 printf("underflow");
 }
 else
 {
 item=head->value;
 ptr=head;
 head=head->next;
 free(ptr);
 printf("poped\n");
 }
 }
 void display()
 {
 int i;
 struct node*ptr;
 ptr=head;
 if(ptr==NULL)
 {
 printf("underflow");
 }
 else
 {
 while(ptr!=NULL)
 {
 printf("elements are............");
 printf("%d\n",ptr->value);
 ptr=ptr->next;
 }
 }
 }
 
