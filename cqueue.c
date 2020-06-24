#include<stdio.h>
#define max 10
int queue[max];
int front=-1, rear=-1;
void insert()
{
    int n;
    printf("Enter number to insert: \n");
    scanf("%d",&n);
    if(front==-1 && rear ==-1)
        rear=front=0;
    else if(front==0&&rear==max-1)
        printf("Queue Overflow");
    else if(front !=0 && rear ==max-1)
        rear=0;
    else
        rear++;
    queue[rear]=n;
}
int delete()
{
    int val;
    if(front==-1&& rear==-1)
    {
        printf("Queue underflow");
        return -1;
    }
    val=queue[front];
    if(front ==rear)
      {
          front = rear=-1;
      }
    else if(front==max-1)
       {
        front=0;
        }
    else
       {
           front++;
       }
    return -1;
}
int peek()
{ int val;
if (front==-1&& rear==-1)
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
int display()
{
int i;
if (front==-1 && rear==-1)
    printf("Queue is empty");
else if(front<rear)
    for(i=front;i<=rear;i++)
        printf("%d",queue[i]);
else
    for(i=front;i<=max-1;i++)
        printf("%d",queue[i]);
    for(i=0;i<=rear;i++)
        printf("%d",queue[i]);
}
int main()
{
    int ch,val;
    do
    {
        printf("Enter choice: \n1. insert \n2. delete \n3. Peek value \n4. Display \n5. Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
            break;
            case 2: val=delete();
                    if(val!=-1)
                        printf("Deleted number is: %d \n", val);
                    break;
            case 3: val=peek();
                    if (val!=-1)
                        printf("Peek Value is: %d \n", val);
                    break;
            case 4: display();
            break;
            case 5: break;
            default:printf("invalid choice");

        }
    }while(ch!= 5);
}
