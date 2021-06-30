#include<stdio.h>
#include<stdlib.h>
 void merge(int arr1[10],int arr2[10],int arr3[20],int n1, int n2);
void main()
{
 int a1[10],a2[10],n1,n2;
 printf("Enter no of elements of 1st array");
 scanf("%d",&n1);
 printf("Enter the elements:");
 for(int i=0;i<n1;i++)
   scanf("%d",&a1[i]);
 printf("Enter no of elements of 2nd array");
 scanf("%d",&n2);
 printf("Enter the elements:");
 for(int j=0;j<n2;j++)
   scanf("%d",&a2[j]);
  int a3[n1+n2];
  merge(a1,a2,a3,n1,n2);
 }
 void merge(int arr1[10],int arr2[10],int arr3[20],int n1, int n2)
 {
  int i,j,k;
  i=0;
  j=0;
  k=0;
  while( i<n1 && j<n2)
  {
   if(arr1[i]<arr2[j])
       arr3[k++]=arr1[i++];
   if(arr2[j]<arr1[i])
       arr3[k++]=arr2[j++];
  }
  while(i<n1)
   arr3[k++]=arr1[i++];
  while(j<n2)
   arr3[k++]=arr2[j++];
  
  printf("The sorted array is:");
  for(i=0;i<n1+n2;i++)
   printf("%d\t",arr3[i]);
}
