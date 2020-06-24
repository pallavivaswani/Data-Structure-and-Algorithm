#include<stdio.h>
#include<conio.h>
struct node
{
struct node *next;
int data;
};
struct node *start=NULL;
struct node *create(struct node *start)
{
    struct node *newnode, *ptr;
    int num;
    printf("Enter -1 to end \n Enter value \n");
    scanf("%d",&num);
    while(num!=-1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=num;
        if(start==NULL)
        {
            newnode->next=NULL;
            start=newnode;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
                newnode->next=ptr;
            }
            printf("Enter value: \n");
            scanf("%d",&num);
        }
    }
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    printf("LinkedList contents are: \n");
    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
return start;
}
struct node *insertBeg(struct node *start)
{
    struct node *newnode;
    int num;
    printf("Enter num: \n");
    scanf("%d",&num);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=start;
    start=newnode;
    return start;
}
void main()
{
    int ch;
    create(start);
    printf("LinkedList created \n");
    display(start);
    do{
    printf("**MENU** \n");
        printf("1.insert at beg \n2. Display\n 3.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertBeg(start);
                    break;
            case 2: display(start);
            case 3: break;
            default: printf("Invalid");
        }
    }while(ch!=3);
}
