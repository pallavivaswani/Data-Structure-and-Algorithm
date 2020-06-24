#include<stdio.h>
#include<conio.h>
#define size 20
int main()
{
int arr[size], num, i, n, pos=-1, found=0;
printf("Enter size of array \n");
scanf("%d",&n);
printf("Enter elements: \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter element to be searched: \n");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if (arr[i]==num)
{
found=1;
pos=1;
printf("Element found at: %d", i+1);
break;
}
}
if(found==0)
{
printf("Element not found");
}
return 0;
}
