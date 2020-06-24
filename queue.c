#include<stdio.h>
#define max 10
int queue[max];
int front, rear;
front=-1, rear=-1;
void insert()
{
int n;
printf("Enter value: \n");
scanf("%d",&n);
if(front==-1&&rear ==-1)
    front=rear=0;
else if(front==0&&rear==max-1)
    printf("Queue Overflow");
else if(front!=0&&rear==max-1)
    rear=0;
else
    rear++;
queue[rear]=n;
}
int peek()
{
int val;
if(front==-1&&rear ==-1)
{
     printf("Queue underflow");
    return -1;
}
else
{
     val=queue[front];
    return val;
}
}
int delete()
{
    int val;
if(front==-1&&rear ==-1)
{
    printf("Queue underflow");
    return -1;
}
else
{
    val=queue[front];
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==max-1)
        front=0;
    else
        front++;
    return val;

}
void display()
{
int i;
if(front<rear)
{
for(i=front;i<=rear;i++)
    printf("%d \n",queue[i]);
}
else
{
for(i=front;i<=max-1;i++)
{
    printf("%d \n",queue[i]);
}
for(i=0;i<=rear;i++)
{
    printf("%d \n",queue[i]);
}
}
}
int main()
{
int ch,val;
do
{
printf("Enter ch:\n1.insert\n2.delete\n3.peek value\n4.display\n5.exit \n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
case 2:     val=delete();
            if(val!=-1)
            printf("Deleted number: %d \n", val);
case 3:     val=peek();
            if(val!=-1)
            printf("Peek value: %d \n", val);
case 4: display();
case 5: break;
default: printf("Invalid");
}
}while(ch!=5);
}
