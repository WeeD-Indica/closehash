#include<stdio.h>
#define size 10
int arr[size];
void insert(int x);
void search(int x);
void display();

void main()
{
  int ch,c=1,key;
  for(int i=0;i<size;i++)
  arr[i]=0;
  while(c!=0)
    {
      printf("\n1.Insert\n2.Search\n3.Display\n");
      scanf("%d",&ch);
      switch(ch)
	{
	case 1:printf("Enter value:");
	  scanf("%d",&key);
	  insert(key);
	  break;
	case 2:printf("Enter value:");
	  scanf("%d",&key);
	  search(key);
	  break;
	case 3:display();break;
	default:printf("\nWrong input\n");
	}
      printf("\nDo you want to continue:(1|0)");
      scanf("%d",&c);
    }
}

void insert(int x)
{
  int mod;
  mod=x%size;
  while(mod<size)
    {
      if(arr[mod]==0)
	{
	  arr[mod]=x;
	  return;
	}
      else
	mod++;
    }
  return;
}

void search(int x)
{
  int mod;
  mod=x%size;
  while(mod<size)
    {
      if(arr[mod]==x)
	{
	  printf("\nElement found at %d position\n",mod); 
	  return;
    }
      else
	mod++;
    }
  printf("\nElement not found\n");	
}

void display()
{
  for(int i=0;i<size;i++)
    printf("%d  ",arr[i]);
  return;
}
