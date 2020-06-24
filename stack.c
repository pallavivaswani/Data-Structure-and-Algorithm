#include<stdio.h>
#define MAX 5
int main()
{
    int i,n,ch,arr[100], top=-1, pushed_element;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    do{
    printf("Enter choice: \n");
    printf("1. PUSH \n 2. POP \n 3. DISPLAY \n 4. EXIT \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            if (top==MAX-1)
                printf("Stack Overflow");
            else
            {
                printf("Enter element to be pushed in the stack: \n");
                scanf("%d",&pushed_element);
                top=top+1;
                arr[top]=pushed_element;
            }
            break;
        case 2:
            if(top==-1)
                printf("Stack Underflow");
            else
            {
                printf("Element popped is: %d \n", arr[top]);
                top=top-1;
            }
            break;
        case 3:
            if(top==-1)
                printf("Stack is empty");
            else
            {
            printf("Stack elements are: \n");
            for(i=top;i>=0;i--)
            {
                printf("%d \n", arr[i]);
            }
            }
            break;
        case 4: break;
        default: printf("INVALID CHOICE");
    }
}while(ch!=4);
}
