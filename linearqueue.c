//repeat 1
#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int front=-1; int rear=-1;
void insert()
{
int num;
printf("Enter number");
scanf("%d",&num);
if(rear==MAX-1)
    printf("Queue overflow");
else if(rear==-1&&front ==-1)
    rear=front=0;
else
    rear++;
queue[rear]=num;
}
int delete()
{
if (front==-1 || front > rear)
    printf("queue underflow");
else
{
    int val;
    val=queue[front];
    front++;
    return val;
}
}
int peek()
{
if(front ==-1 || front>rear)
    printf("queue underflow");
else
{
 return queue[front];
}
}
int display()
{
for(int i=front; i<=rear; i++)
{
printf("%d", queue[i]);
}
}
int main()
{
int ch,val;
do
{
printf("Enter ch: \n 1.insert \n 2.delete \n 3.peek val \n 4. display \n 5. exit \n ");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
        break;
case 2: val=delete();
        if(val!=-1)
            printf("Deleted number is:%d \n",val);
        break;
case 3: val=peek();
        if(val!=-1)
            printf("Peek value is: %d \n", val);
        break;
case 4: display();
        break;
case 5: break;
default: printf("INVALID");
}
}while(ch!=5);
}
